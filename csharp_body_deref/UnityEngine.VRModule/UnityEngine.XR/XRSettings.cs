// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.XRSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.XR;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Runtime/Interfaces/IVRDevice.h")]
[UnityEngine.Bindings.NativeHeader("Modules/VR/ScriptBindings/XR.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/VR/VRModule.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/GfxDevice/GfxDeviceTypes.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
public static class XRSettings
{
	[Token(Token = "0x17000001")]
	public static extern bool enabled
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x3312B90", Offset = "0x3311190", VA = "0x183312B90")]
		[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
		get;
	}

	[Token(Token = "0x17000002")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	[UnityEngine.Bindings.NativeName("Active")]
	public static extern bool isDeviceActive
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x3312CB0", Offset = "0x33112B0", VA = "0x183312CB0")]
		get;
	}

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	public static extern int eyeTextureWidth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x3312C80", Offset = "0x3311280", VA = "0x183312C80")]
		get;
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	public static extern int eyeTextureHeight
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x3312C50", Offset = "0x3311250", VA = "0x183312C50")]
		get;
	}

	[Token(Token = "0x17000005")]
	[UnityEngine.Bindings.NativeName("IntermediateEyeTextureDesc")]
	[UnityEngine.Bindings.NativeConditional("ENABLE_VR", "RenderTextureDesc()")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	public static RenderTextureDescriptor eyeTextureDesc
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x3312C00", Offset = "0x3311200", VA = "0x183312C00")]
		get
		{
			return default(RenderTextureDescriptor);
		}
	}

	[Token(Token = "0x17000006")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	[UnityEngine.Bindings.NativeName("DeviceName")]
	public static string loadedDeviceName
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x3312D20", Offset = "0x3311320", VA = "0x183312D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	public static extern string[] supportedDevices
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x3312DD0", Offset = "0x33113D0", VA = "0x183312DD0")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000008")]
	[Address(RVA = "0x3312BC0", Offset = "0x33111C0", VA = "0x183312BC0")]
	private static extern void get_eyeTextureDesc_Injected(out RenderTextureDescriptor ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000009")]
	[Address(RVA = "0x3312CE0", Offset = "0x33112E0", VA = "0x183312CE0")]
	private static extern void get_loadedDeviceName_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret);
}
