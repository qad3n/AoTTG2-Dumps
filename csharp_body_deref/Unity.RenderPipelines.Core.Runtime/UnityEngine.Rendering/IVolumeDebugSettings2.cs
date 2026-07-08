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
