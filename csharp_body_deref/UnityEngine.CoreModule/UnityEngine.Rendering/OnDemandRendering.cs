// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OnDemandRendering
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000357")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class OnDemandRendering
{
	[Token(Token = "0x400099D")]
	[FieldOffset(Offset = "0x0")]
	private static int m_RenderFrameInterval;

	[Token(Token = "0x1700030D")]
	public static bool willCurrentFrameRender
	{
		[Token(Token = "0x60012DF")]
		[Address(RVA = "0x2F4BAB0", Offset = "0x2F4A0B0", VA = "0x182F4BAB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700030E")]
	public static int renderFrameInterval
	{
		[Token(Token = "0x60012E0")]
		[Address(RVA = "0x2F4BA60", Offset = "0x2F4A060", VA = "0x182F4BA60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700030F")]
	public static int effectiveRenderFrameRate
	{
		[Token(Token = "0x60012E3")]
		[Address(RVA = "0x2F4B9E0", Offset = "0x2F49FE0", VA = "0x182F4B9E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x2F4B910", Offset = "0x2F49F10", VA = "0x182F4B910")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetRenderFrameInterval(out int frameInterval)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x2F4B8E0", Offset = "0x2F49EE0", VA = "0x182F4B8E0")]
	[UnityEngine.Bindings.FreeFunction]
	internal static extern float GetEffectiveRenderFrameRate();
}
