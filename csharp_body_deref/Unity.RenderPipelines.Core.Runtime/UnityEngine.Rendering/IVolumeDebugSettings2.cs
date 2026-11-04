// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IVolumeDebugSettings2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000D3")]
[Obsolete("This is not longer supported Please use DebugDisplaySettingsVolume. #from(6000.2)")]
public interface IVolumeDebugSettings2 : IVolumeDebugSettings
{
	[Token(Token = "0x170000BA")]
	[Obsolete("This property is obsolete and kept only for not breaking user code. VolumeDebugSettings will use current pipeline when it needs to gather volume component types and paths. #from(2023.2)")]
	Type targetRenderPipeline
	{
		[Token(Token = "0x60007A3")]
		get;
	}

	[Token(Token = "0x170000BB")]
	[Obsolete("This property is obsolete and kept only for not breaking user code. VolumeDebugSettings will use current pipeline when it needs to gather volume component types and paths. #from(2023.2)")]
	List<(string, Type)> volumeComponentsPathAndType
	{
		[Token(Token = "0x60007A4")]
		get;
	}
}
