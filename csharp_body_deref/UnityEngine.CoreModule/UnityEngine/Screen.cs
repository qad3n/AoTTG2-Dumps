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
		[Address(RVA = "0x4A99010", Offset = "0x4A99010", VA = "0x4A99010")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetWidth", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x1700009C")]
	public static extern int height
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x4A99040", Offset = "0x4A99040", VA = "0x4A99040")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetHeight", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x1700009D")]
	public static extern float dpi
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000319")]
		[Address(RVA = "0x4A99070", Offset = "0x4A99070", VA = "0x4A99070")]
		[UnityEngine.Bindings.NativeName("GetDPI")]
		get;
	}

	[Token(Token = "0x1700009E")]
	public static ScreenOrientation orientation
	{
		[Token(Token = "0x600031B")]
		[Address(RVA = "0x4A990D0", Offset = "0x4A990D0", VA = "0x4A990D0")]
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
		[Address(RVA = "0x4A99100", Offset = "0x4A99100", VA = "0x4A99100")]
		[UnityEngine.Bindings.NativeName("IsFullscreen")]
		get;
	}

	[Token(Token = "0x170000A0")]
	public static extern Resolution[] resolutions
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600031F")]
		[Address(RVA = "0x4A99230", Offset = "0x4A99230", VA = "0x4A99230")]
		[UnityEngine.Bindings.FreeFunction("ScreenScripting::GetResolutions")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031A")]
	[Address(RVA = "0x4A990A0", Offset = "0x4A990A0", VA = "0x4A990A0")]
	private static extern ScreenOrientation GetScreenOrientation();

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x4A99130", Offset = "0x4A99130", VA = "0x4A99130")]
	[UnityEngine.Bindings.NativeName("RequestResolution")]
	public static void SetResolution(int width, int height, FullScreenMode fullscreenMode, RefreshRate preferredRefreshRate)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x4A991D0", Offset = "0x4A991D0", VA = "0x4A991D0")]
	public static void SetResolution(int width, int height, FullScreenMode fullscreenMode)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000320")]
	[Address(RVA = "0x4A99180", Offset = "0x4A99180", VA = "0x4A99180")]
	private static extern void SetResolution_Injected(int width, int height, FullScreenMode fullscreenMode, [In] ref RefreshRate preferredRefreshRate);
}
