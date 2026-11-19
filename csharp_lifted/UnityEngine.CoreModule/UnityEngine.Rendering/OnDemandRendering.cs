// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OnDemandRendering
// Update status: unchanged since the previous dump
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
	[Token(Token = "0x400099B")]
	[FieldOffset(Offset = "0x0")]
	private static int m_RenderFrameInterval;

	[Token(Token = "0x17000312")]
	public static bool willCurrentFrameRender
	{
		[Token(Token = "0x60012F3")]
		[Address(RVA = "0x693F800", Offset = "0x693E800", VA = "0x693F800")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000313")]
	public static int renderFrameInterval
	{
		[Token(Token = "0x60012F4")]
		[Address(RVA = "0x693F8C0", Offset = "0x693E8C0", VA = "0x693F8C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000314")]
	public static int effectiveRenderFrameRate
	{
		[Token(Token = "0x60012F7")]
		[Address(RVA = "0x693FA10", Offset = "0x693EA10", VA = "0x693FA10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60012F5")]
	[Address(RVA = "0x693F930", Offset = "0x693E930", VA = "0x693F930")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetRenderFrameInterval(out int frameInterval)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x693F9E0", Offset = "0x693E9E0", VA = "0x693F9E0")]
	[UnityEngine.Bindings.FreeFunction]
	internal static extern float GetEffectiveRenderFrameRate();
}
