src_includepath = include_directories('.')

credentials_deps = [
  libsecret_dep,
  tss2_esys_dep,
  tss2_mu_dep,
  tss2_rc_dep,
  tss2_tctildr_dep,
]

deps = [
  cairo_dep,
  glib_dep,
  gio_dep,
  gio_unix_dep,
  pipewire_dep,
  libei_dep,
  libnotify_dep,
  epoxy_dep,
  drm_dep,
  xkbcommon_dep,

  credentials_deps,
]

credentials_sources = files([
  'grd-credentials.c',
  'grd-credentials.h',
  'grd-credentials-file.c',
  'grd-credentials-file.h',
  'grd-credentials-libsecret.c',
  'grd-credentials-libsecret.h',
  'grd-credentials-one-time.c',
  'grd-credentials-one-time.h',
  'grd-credentials-tpm.c',
  'grd-credentials-tpm.h',
  'grd-tpm.c',
  'grd-tpm.h',
])

daemon_sources = files([
  'grd-clipboard.c',
  'grd-clipboard.h',
  'grd-context.c',
  'grd-context.h',
  'grd-daemon.c',
  'grd-daemon.h',
  'grd-daemon-user.c',
  'grd-daemon-user.h',
  'grd-damage-utils.c',
  'grd-damage-utils.h',
  'grd-debug.c',
  'grd-debug.h',
  'grd-egl-thread.c',
  'grd-egl-thread.h',
  'grd-mime-type.c',
  'grd-mime-type.h',
  'grd-pipewire-utils.c',
  'grd-pipewire-utils.h',
  'grd-private.h',
  'grd-prompt.c',
  'grd-prompt.h',
  'grd-session.c',
  'grd-session.h',
  'grd-settings.c',
  'grd-settings.h',
  'grd-settings-handover.c',
  'grd-settings-handover.h',
  'grd-settings-system.c',
  'grd-settings-system.h',
  'grd-settings-user.c',
  'grd-settings-user.h',
  'grd-stream.c',
  'grd-stream.h',
  'grd-types.h',
  'grd-utils.c',
  'grd-utils.h',
])

if have_rdp
  daemon_sources += files([
    'grd-avc-frame-info.c',
    'grd-avc-frame-info.h',
    'grd-bitstream.c',
    'grd-bitstream.h',
    'grd-clipboard-rdp.c',
    'grd-clipboard-rdp.h',
    'grd-damage-detector-sw.c',
    'grd-damage-detector-sw.h',
    'grd-encode-context.c',
    'grd-encode-context.h',
    'grd-encode-session.c',
    'grd-encode-session.h',
    'grd-encode-session-ca-sw.c',
    'grd-encode-session-ca-sw.h',
    'grd-encode-session-vaapi.c',
    'grd-encode-session-vaapi.h',
    'grd-hwaccel-nvidia.c',
    'grd-hwaccel-nvidia.h',
    'grd-hwaccel-vaapi.c',
    'grd-hwaccel-vaapi.h',
    'grd-hwaccel-vulkan.c',
    'grd-hwaccel-vulkan.h',
    'grd-image-view.c',
    'grd-image-view.h',
    'grd-image-view-nv12.c',
    'grd-image-view-nv12.h',
    'grd-image-view-rgb.c',
    'grd-image-view-rgb.h',
    'grd-local-buffer.c',
    'grd-local-buffer.h',
    'grd-local-buffer-copy.c',
    'grd-local-buffer-copy.h',
    'grd-local-buffer-wrapper-rdp.c',
    'grd-local-buffer-wrapper-rdp.h',
    'grd-nal-writer.c',
    'grd-nal-writer.h',
    'grd-rdp-audio-output-stream.c',
    'grd-rdp-audio-output-stream.h',
    'grd-rdp-buffer.c',
    'grd-rdp-buffer.h',
    'grd-rdp-buffer-info.h',
    'grd-rdp-buffer-pool.c',
    'grd-rdp-buffer-pool.h',
    'grd-rdp-connect-time-autodetection.c',
    'grd-rdp-connect-time-autodetection.h',
    'grd-rdp-cursor-renderer.c',
    'grd-rdp-cursor-renderer.h',
    'grd-rdp-damage-detector.c',
    'grd-rdp-damage-detector.h',
    'grd-rdp-damage-detector-cuda.c',
    'grd-rdp-damage-detector-cuda.h',
    'grd-rdp-damage-detector-memcmp.c',
    'grd-rdp-damage-detector-memcmp.h',
    'grd-rdp-dsp.c',
    'grd-rdp-dsp.h',
    'grd-rdp-dvc.c',
    'grd-rdp-dvc.h',
    'grd-rdp-dvc-audio-input.c',
    'grd-rdp-dvc-audio-input.h',
    'grd-rdp-dvc-audio-playback.c',
    'grd-rdp-dvc-audio-playback.h',
    'grd-rdp-dvc-display-control.c',
    'grd-rdp-dvc-display-control.h',
    'grd-rdp-dvc-graphics-pipeline.c',
    'grd-rdp-dvc-graphics-pipeline.h',
    'grd-rdp-dvc-handler.c',
    'grd-rdp-dvc-handler.h',
    'grd-rdp-dvc-input.c',
    'grd-rdp-dvc-input.h',
    'grd-rdp-dvc-telemetry.c',
    'grd-rdp-dvc-telemetry.h',
    'grd-rdp-event-queue.c',
    'grd-rdp-event-queue.h',
    'grd-rdp-frame.c',
    'grd-rdp-frame.h',
    'grd-rdp-frame-info.h',
    'grd-rdp-frame-stats.c',
    'grd-rdp-frame-stats.h',
    'grd-rdp-fuse-clipboard.c',
    'grd-rdp-fuse-clipboard.h',
    'grd-rdp-gfx-frame-controller.c',
    'grd-rdp-gfx-frame-controller.h',
    'grd-rdp-gfx-frame-log.c',
    'grd-rdp-gfx-frame-log.h',
    'grd-rdp-gfx-framerate-log.c',
    'grd-rdp-gfx-framerate-log.h',
    'grd-rdp-gfx-surface.c',
    'grd-rdp-gfx-surface.h',
    'grd-rdp-layout-manager.c',
    'grd-rdp-layout-manager.h',
    'grd-rdp-legacy-buffer.c',
    'grd-rdp-legacy-buffer.h',
    'grd-rdp-monitor-config.c',
    'grd-rdp-monitor-config.h',
    'grd-rdp-network-autodetection.c',
    'grd-rdp-network-autodetection.h',
    'grd-rdp-pipewire-stream.c',
    'grd-rdp-pipewire-stream.h',
    'grd-rdp-private.h',
    'grd-rdp-pw-buffer.c',
    'grd-rdp-pw-buffer.h',
    'grd-rdp-render-context.c',
    'grd-rdp-render-context.h',
    'grd-rdp-render-state.c',
    'grd-rdp-render-state.h',
    'grd-rdp-renderer.c',
    'grd-rdp-renderer.h',
    'grd-rdp-routing-token.c',
    'grd-rdp-routing-token.h',
    'grd-rdp-sam.c',
    'grd-rdp-sam.h',
    'grd-rdp-server.c',
    'grd-rdp-server.h',
    'grd-rdp-session-metrics.c',
    'grd-rdp-session-metrics.h',
    'grd-rdp-stream-owner.c',
    'grd-rdp-stream-owner.h',
    'grd-rdp-surface.c',
    'grd-rdp-surface.h',
    'grd-rdp-surface-renderer.c',
    'grd-rdp-surface-renderer.h',
    'grd-rdp-sw-encoder-ca.c',
    'grd-rdp-sw-encoder-ca.h',
    'grd-rdp-view-creator.c',
    'grd-rdp-view-creator.h',
    'grd-rdp-view-creator-avc.c',
    'grd-rdp-view-creator-avc.h',
    'grd-rdp-view-creator-gen-gl.c',
    'grd-rdp-view-creator-gen-gl.h',
    'grd-rdp-view-creator-gen-sw.c',
    'grd-rdp-view-creator-gen-sw.h',
    'grd-session-rdp.c',
    'grd-session-rdp.h',
    'grd-shell-dialog.c',
    'grd-shell-dialog.h',
    'grd-vk-buffer.c',
    'grd-vk-buffer.h',
    'grd-vk-device.c',
    'grd-vk-device.h',
    'grd-vk-image.c',
    'grd-vk-image.h',
    'grd-vk-memory.c',
    'grd-vk-memory.h',
    'grd-vk-queue.c',
    'grd-vk-queue.h',
    'grd-vk-utils.c',
    'grd-vk-utils.h',
  ])

  if libsystemd_dep.found()
    daemon_sources += files([
      'grd-daemon-handover.c',
      'grd-daemon-handover.h',
      'grd-daemon-system.c',
      'grd-daemon-system.h',
      'grd-daemon-utils.c',
      'grd-daemon-utils.h',
    ])

    deps += [
      libsystemd_dep,
    ]
  endif

  deps += [
    cuda_dep,
    dl_dep,
    fdk_aac_dep,
    freerdp_dep,
    freerdp_server_dep,
    fuse_dep,
    libva_dep,
    libva_drm_dep,
    m_dep,
    opus_dep,
    vulkan_dep,
    winpr_dep,
  ]
endif

if have_vnc
  daemon_sources += files([
    'grd-clipboard-vnc.c',
    'grd-clipboard-vnc.h',
    'grd-session-vnc.c',
    'grd-session-vnc.h',
    'grd-vnc-cursor.c',
    'grd-vnc-cursor.h',
    'grd-vnc-monitor-config.h',
    'grd-vnc-pipewire-stream.c',
    'grd-vnc-pipewire-stream.h',
    'grd-vnc-server.c',
    'grd-vnc-server.h',
  ])

  deps += [
    libvncserver_dep,
  ]
endif

daemon_sources += credentials_sources

gen_daemon_sources = []

gen_daemon_sources += gnome.gdbus_codegen('grd-dbus-mutter-screen-cast',
                                          'org.gnome.Mutter.ScreenCast.xml',
                                          interface_prefix: 'org.gnome.Mutter.',
                                          namespace: 'GrdDBusMutter')
gen_daemon_sources += gnome.gdbus_codegen('grd-dbus-mutter-remote-desktop',
                                          'org.gnome.Mutter.RemoteDesktop.xml',
                                          interface_prefix: 'org.gnome.Mutter.',
                                          namespace: 'GrdDBusMutter')
dbus_gen_remote_desktop = gnome.gdbus_codegen('grd-dbus-remote-desktop',
                                              'org.gnome.RemoteDesktop.xml',
                                              interface_prefix: 'org.gnome.RemoteDesktop.',
                                              namespace: 'GrdDBusRemoteDesktop')
gen_daemon_sources += dbus_gen_remote_desktop

if have_rdp
  gen_daemon_sources += gnome.gdbus_codegen('grd-dbus-gdm',
                                            'org.gnome.DisplayManager.xml',
                                            object_manager: true,
                                            interface_prefix: 'org.gnome.DisplayManager.',
                                            namespace: 'GrdDBusGdm')
endif

gen_enum_types = gnome.mkenums('grd-enum-types',
  h_template: 'grd-enum-types.h.in',
  c_template: 'grd-enum-types.c.in',
  sources: 'grd-enums.h',
)

daemon_sources += gen_daemon_sources

daemon_sources += gen_enum_types

control_sources = ([
  'grd-control.c'
])

ctl_shared_sources = ([
  'grd-debug.c',
  'grd-debug.h',
  'grd-settings.c',
  'grd-settings.h',
  'grd-settings-system.c',
  'grd-settings-system.h',
  'grd-utils.c',
  'grd-utils.h',
  credentials_sources,
  gen_enum_types,
])

ctl_sources = ([
  'grd-ctl.c',
  'grd-settings-user.c',
  'grd-settings-user.h',
  ctl_shared_sources,
])

configuration_sources = ([
  'grd-configuration.c',
  ctl_shared_sources,
  dbus_gen_remote_desktop,
])

ctl_deps = [
  glib_dep,
  gio_dep,
  gio_unix_dep,
  credentials_deps,
]

if have_rdp
  ctl_deps += [
    freerdp_dep,
    polkit_dep,
  ]

  enable_service_sources = ([
    'grd-enable-service.c',
  ])

  enable_service_deps = [
    glib_dep,
    gio_dep,
    polkit_dep,
  ]
endif

executable('gnome-remote-desktop-daemon',
           daemon_sources,
           dependencies: deps,
           include_directories: [configinc],
           install: true,
           install_dir: libexecdir)

executable('gnome-remote-desktop-control',
           control_sources,
           dependencies: [glib_dep, gio_dep],
           include_directories: [configinc],
           install : false)

executable('grdctl',
           ctl_sources,
           dependencies: ctl_deps,
           include_directories: [configinc],
           install: true)

if have_rdp
  executable('gnome-remote-desktop-enable-service',
             enable_service_sources,
             dependencies: enable_service_deps,
             include_directories: [configinc],
             install: true,
             install_dir: libexecdir)

  executable('gnome-remote-desktop-configuration-daemon',
             configuration_sources,
             dependencies: ctl_deps,
             include_directories: [configinc],
             install: true,
             install_dir: libexecdir)
endif

custom_target('gsettings-enums',
              input: 'grd-enums.h',
              output: 'org.gnome.desktop.remote-desktop.enums.xml',
              install: true,
              install_dir: schemadir,
              capture: true,
              command: ['glib-mkenums',
                '--comments', '<!-- @comment@ -->',
                '--fhead', '<schemalist>',
                '--vhead', '  <@type@ id="org.gnome.desktop.remote-desktop.@EnumName@">',
                '--vprod', '    <value nick="@valuenick@" value="@valuenum@"/>',
                '--vtail', '  </@type@>',
                '--ftail', '</schemalist>',
                '@INPUT@'])
schema = 'org.gnome.desktop.remote-desktop.gschema.xml'
generated_schema = configure_file(output: schema,
                                  input: schema + '.in',
                                  copy: true)
install_data(generated_schema,
             install_dir: schemadir)

subdir('shaders')
