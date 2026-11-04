// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Screen
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000CD")]
[UnityEngine.Bindings.StaticAccessor("GetScreenManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/WindowLayout.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ScreenManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
public sealed class Screen
{
	[Token(Token = "0x170000B7")]
	public static extern int width
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x2ED3F70", Offset = "0x2ED2570", VA = "0x182ED3F70")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetWidth", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x170000B8")]
	public static extern int height
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x2ED3E40", Offset = "0x2ED2440", VA = "0x182ED3E40")]
		[UnityEngine.Bindings.NativeMethod(Name = "GetHeight", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x170000B9")]
	public static extern float dpi
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x2ED3DB0", Offset = "0x2ED23B0", VA = "0x182ED3DB0")]
		[UnityEngine.Bindings.NativeName("GetDPI")]
		get;
	}

	[Token(Token = "0x170000BA")]
	public static ScreenOrientation orientation
	{
		[Token(Token = "0x6000452")]
		[Address(RVA = "0x2ED3BA0", Offset = "0x2ED21A0", VA = "0x182ED3BA0")]
		get
		{
			return default(ScreenOrientation);
		}
	}

	[Token(Token = "0x170000BB")]
	public static Resolution currentResolution
	{
		[Token(Token = "0x6000453")]
		[Address(RVA = "0x2ED3D70", Offset = "0x2ED2370", VA = "0x182ED3D70")]
		get
		{
			return default(Resolution);
		}
	}

	[Token(Token = "0x170000BC")]
	public static extern bool fullScreen
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x2ED3E10", Offset = "0x2ED2410", VA = "0x182ED3E10")]
		[UnityEngine.Bindings.NativeName("IsFullscreen")]
		get;
	}

	[Token(Token = "0x170000BD")]
	public static extern FullScreenMode fullScreenMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000455")]
		[Address(RVA = "0x2ED3DE0", Offset = "0x2ED23E0", VA = "0x182ED3DE0")]
		[UnityEngine.Bindings.NativeName("GetFullscreenMode")]
		get;
	}

	[Token(Token = "0x170000BE")]
	public static int msaaSamples
	{
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x2ED3B70", Offset = "0x2ED2170", VA = "0x182ED3B70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000BF")]
	public static Resolution[] resolutions
	{
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x2ED3EB0", Offset = "0x2ED24B0", VA = "0x182ED3EB0")]
		[UnityEngine.Bindings.FreeFunction("ScreenScripting::GetResolutions")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000451")]
	[Address(RVA = "0x2ED3BA0", Offset = "0x2ED21A0", VA = "0x182ED3BA0")]
	private static extern ScreenOrientation GetScreenOrientation();

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x2ED3C60", Offset = "0x2ED2260", VA = "0x182ED3C60")]
	[UnityEngine.Bindings.NativeName("RequestResolution")]
	public static void SetResolution(int width, int height, FullScreenMode fullscreenMode, RefreshRate preferredRefreshRate)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x2ED3CC0", Offset = "0x2ED22C0", VA = "0x182ED3CC0")]
	public static void SetResolution(int width, int height, FullScreenMode fullscreenMode)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000458")]
	[Address(RVA = "0x2ED3BD0", Offset = "0x2ED21D0", VA = "0x182ED3BD0")]
	[UnityEngine.Bindings.NativeName("SetRequestedMSAASamples")]
	public static extern void SetMSAASamples(int numSamples);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000459")]
	[Address(RVA = "0x2ED3B70", Offset = "0x2ED2170", VA = "0x182ED3B70")]
	[UnityEngine.Bindings.NativeName("GetRequestedMSAASamples")]
	private static extern int GetMSAASamples();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600045C")]
	[Address(RVA = "0x2ED3D30", Offset = "0x2ED2330", VA = "0x182ED3D30")]
	private static extern void get_currentResolution_Injected(out Resolution ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600045D")]
	[Address(RVA = "0x2ED3C10", Offset = "0x2ED2210", VA = "0x182ED3C10")]
	private static extern void SetResolution_Injected(int width, int height, FullScreenMode fullscreenMode, [In] ref RefreshRate preferredRefreshRate);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600045E")]
	[Address(RVA = "0x2ED3E70", Offset = "0x2ED2470", VA = "0x182ED3E70")]
	private static extern void get_resolutions_Injected(out BlittableArrayWrapper ret);
}
