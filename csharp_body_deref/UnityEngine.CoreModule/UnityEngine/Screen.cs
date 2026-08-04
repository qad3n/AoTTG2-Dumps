// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Screen
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000A9")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.StaticAccessor("GetScreenManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/WindowLayout.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScreenManager.h")]
public sealed class Screen
{
	[Token(Token = "0x1700009B")]
	public static extern int width
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000317")]
		[Address(RVA = "0x4DC0830", Offset = "0x4DC0830", VA = "0x4DC0830")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetWidth", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x1700009C")]
	public static extern int height
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x4DC0860", Offset = "0x4DC0860", VA = "0x4DC0860")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetHeight", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x1700009D")]
	public static extern float dpi
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000319")]
		[Address(RVA = "0x4DC0890", Offset = "0x4DC0890", VA = "0x4DC0890")]
		[UnityEngine.Bindings.NativeName("GetDPI")]
		get;
	}

	[Token(Token = "0x1700009E")]
	public static ScreenOrientation orientation
	{
		[Token(Token = "0x600031B")]
		[Address(RVA = "0x4DC08F0", Offset = "0x4DC08F0", VA = "0x4DC08F0")]
		get
		{
			return default(ScreenOrientation);
		}
	}

	[Token(Token = "0x1700009F")]
	public static extern bool fullScreen
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600031C")]
		[Address(RVA = "0x4DC0920", Offset = "0x4DC0920", VA = "0x4DC0920")]
		[UnityEngine.Bindings.NativeName("IsFullscreen")]
		get;
	}

	[Token(Token = "0x170000A0")]
	public static extern Resolution[] resolutions
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600031F")]
		[Address(RVA = "0x4DC0A50", Offset = "0x4DC0A50", VA = "0x4DC0A50")]
		[UnityEngine.Bindings.FreeFunction("ScreenScripting::GetResolutions")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031A")]
	[Address(RVA = "0x4DC08C0", Offset = "0x4DC08C0", VA = "0x4DC08C0")]
	private static extern ScreenOrientation GetScreenOrientation();

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x4DC0950", Offset = "0x4DC0950", VA = "0x4DC0950")]
	[UnityEngine.Bindings.NativeName("RequestResolution")]
	public static void SetResolution(int width, int height, FullScreenMode fullscreenMode, RefreshRate preferredRefreshRate)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x4DC09F0", Offset = "0x4DC09F0", VA = "0x4DC09F0")]
	public static void SetResolution(int width, int height, FullScreenMode fullscreenMode)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000320")]
	[Address(RVA = "0x4DC09A0", Offset = "0x4DC09A0", VA = "0x4DC09A0")]
	private static extern void SetResolution_Injected(int width, int height, FullScreenMode fullscreenMode, [In] ref RefreshRate preferredRefreshRate);
}
