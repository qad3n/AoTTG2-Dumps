// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.Bone
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBone.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x200000D")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("XRInputDevices::Get()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputDevices.h")]
[UnityEngine.Bindings.NativeHeader("XRScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/XRPrefix.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
public struct Bone : IEquatable<Bone>
{
	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x0")]
	private ulong m_DeviceId;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x8")]
	private uint m_FeatureIndex;

	[Token(Token = "0x1700000B")]
	internal ulong deviceId
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x6D22E90", Offset = "0x6D21E90", VA = "0x6D22E90")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x1700000C")]
	internal uint featureIndex
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x6D22EA0", Offset = "0x6D21EA0", VA = "0x6D22EA0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x6D22EB0", Offset = "0x6D21EB0", VA = "0x6D22EB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x6D22F20", Offset = "0x6D21F20", VA = "0x6D22F20", Slot = "4")]
	public bool Equals(Bone other)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x6D22F30", Offset = "0x6D21F30", VA = "0x6D22F30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
