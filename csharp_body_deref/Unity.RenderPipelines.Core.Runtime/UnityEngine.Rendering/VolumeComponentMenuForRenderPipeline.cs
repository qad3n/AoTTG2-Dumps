using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001D7")]
[Obsolete("VolumeComponentMenuForRenderPipelineAttribute is deprecated. Use VolumeComponentMenu with SupportedOnCurrentPipeline instead. #from(2023.1)", false)]
public class VolumeComponentMenuForRenderPipeline : VolumeComponentMenu
{
	[Token(Token = "0x17000192")]
	public Type[] pipelineTypes
	{
		[Token(Token = "0x6000D60")]
		[Address(RVA = "0x48E1530", Offset = "0x48E1530", VA = "0x48E1530")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x48E1540", Offset = "0x48E1540", VA = "0x48E1540")]
	public VolumeComponentMenuForRenderPipeline(string menu, params Type[] pipelineTypes)
	{
	}
}
