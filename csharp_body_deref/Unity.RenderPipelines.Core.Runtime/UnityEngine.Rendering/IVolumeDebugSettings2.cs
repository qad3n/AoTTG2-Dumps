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

[Token(Token = "0x20000FD")]
public interface IVolumeDebugSettings2 : IVolumeDebugSettings
{
	[Token(Token = "0x170000D1")]
	Type targetRenderPipeline
	{
		[Token(Token = "0x6000842")]
		get;
	}

	[Token(Token = "0x170000D2")]
	List<(string, Type)> volumeComponentsPathAndType
	{
		[Token(Token = "0x6000843")]
		get;
	}
}
