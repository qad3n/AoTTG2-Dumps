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
		[Address(RVA = "0x6D225B0", Offset = "0x6D215B0", VA = "0x6D225B0")]
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
		[Address(RVA = "0x6D225E0", Offset = "0x6D215E0", VA = "0x6D225E0")]
		get;
	}

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	public static extern int eyeTextureWidth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x6D22610", Offset = "0x6D21610", VA = "0x6D22610")]
		get;
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	public static extern int eyeTextureHeight
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x6D22640", Offset = "0x6D21640", VA = "0x6D22640")]
		get;
	}

	[Token(Token = "0x17000005")]
	[UnityEngine.Bindings.NativeName("IntermediateEyeTextureDesc")]
	[UnityEngine.Bindings.StaticAccessor("GetIVRDeviceScripting()", UnityEngine.Bindings.StaticAccessorType.ArrowWithDefaultReturnIfNull)]
	[UnityEngine.Bindings.NativeConditional("ENABLE_VR", "RenderTextureDesc()")]
	public static RenderTextureDescriptor eyeTextureDesc
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x6D22670", Offset = "0x6D21670", VA = "0x6D22670")]
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
		[Address(RVA = "0x6D22710", Offset = "0x6D21710", VA = "0x6D22710")]
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
		[Address(RVA = "0x6D22800", Offset = "0x6D21800", VA = "0x6D22800")]
		get;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000008")]
	[Address(RVA = "0x6D226E0", Offset = "0x6D216E0", VA = "0x6D226E0")]
	private static extern void get_eyeTextureDesc_Injected(out RenderTextureDescriptor ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000009")]
	[Address(RVA = "0x6D227D0", Offset = "0x6D217D0", VA = "0x6D227D0")]
	private static extern void get_loadedDeviceName_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret);
}
