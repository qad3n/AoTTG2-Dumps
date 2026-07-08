using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002CC")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class OnDemandRendering
{
	[Token(Token = "0x4000814")]
	[FieldOffset(Offset = "0x0")]
	private static int m_RenderFrameInterval;

	[Token(Token = "0x17000272")]
	public static int renderFrameInterval
	{
		[Token(Token = "0x6000E4B")]
		[Address(RVA = "0x4AF1C60", Offset = "0x4AF1C60", VA = "0x4AF1C60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x4AF1CD0", Offset = "0x4AF1CD0", VA = "0x4AF1CD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetRenderFrameInterval(out int frameInterval)
	{
	}
}
