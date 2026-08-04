// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.XRSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.XR;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Modules/VR/ScriptBindings/XR.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Interfaces/IVRDevice.h")]
[UnityEngine.Bindings.NativeHeader("Modules/VR/VRModule.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
public static class XRSettings
{
	[Token(Token = "0x2000003")]
	public enum StereoRenderingMode
	{
		[Token(Token = "0x4000002")]
		MultiPass,
		[Token(Token = "0x4000003")]
		SinglePass,
		[Token(Token = "0x4000004")]
		SinglePassInstanced,
		[Token(Token = "0x4000005")]
		SinglePassMultiview
	}

	[Token(Token = "0x17000001")]
	public static extern bool enabled
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x510BD90", Offset = "0x510BD90", VA = "0x510BD90")]
		[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
		get;
	}

	[Token(Token = "0x17000002")]
	[UnityEngine.Bindings.NativeName("Active")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	public static extern bool isDeviceActive
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x510BDC0", Offset = "0x510BDC0", VA = "0x510BDC0")]
		get;
	}

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	[UnityEngine.Bindings.NativeName("RenderScale")]
	public static extern float eyeTextureResolutionScale
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x510BDF0", Offset = "0x510BDF0", VA = "0x510BDF0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x510BE20", Offset = "0x510BE20", VA = "0x510BE20")]
		set;
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	public static extern int eyeTextureWidth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x510BE60", Offset = "0x510BE60", VA = "0x510BE60")]
		get;
	}

	[Token(Token = "0x17000005")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	public static extern int eyeTextureHeight
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x510BE90", Offset = "0x510BE90", VA = "0x510BE90")]
		get;
	}

	[Token(Token = "0x17000006")]
	[UnityEngine.Bindings.NativeName("IntermediateEyeTextureDesc")]
	[UnityEngine.Bindings.NativeConditional("ENABLE_VR", "RenderTextureDesc()")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	public static RenderTextureDescriptor eyeTextureDesc
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x510BEC0", Offset = "0x510BEC0", VA = "0x510BEC0")]
		get
		{
			return default(RenderTextureDescriptor);
		}
	}

	[Token(Token = "0x17000007")]
	public static float renderViewportScale
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x510BF60", Offset = "0x510BF60", VA = "0x510BF60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000008")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	[UnityEngine.Bindings.NativeName("RenderViewportScale")]
	internal static extern float renderViewportScaleInternal
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x510BF90", Offset = "0x510BF90", VA = "0x510BF90")]
		get;
	}

	[Token(Token = "0x17000009")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	[UnityEngine.Bindings.NativeName("DeviceName")]
	public static extern string loadedDeviceName
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x510BFC0", Offset = "0x510BFC0", VA = "0x510BFC0")]
		get;
	}

	[Token(Token = "0x1700000A")]
	public static extern string[] supportedDevices
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x510BFF0", Offset = "0x510BFF0", VA = "0x510BFF0")]
		get;
	}

	[Token(Token = "0x1700000B")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	public static extern StereoRenderingMode stereoRenderingMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x510C020", Offset = "0x510C020", VA = "0x510C020")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x510BF30", Offset = "0x510BF30", VA = "0x510BF30")]
	private static extern void get_eyeTextureDesc_Injected(out RenderTextureDescriptor ret);
}
