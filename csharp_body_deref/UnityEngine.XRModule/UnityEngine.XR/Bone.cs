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
[UnityEngine.Bindings.NativeHeader("Modules/XR/XRPrefix.h")]
[UnityEngine.Bindings.NativeHeader("XRScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputDevices.h")]
[UnityEngine.Bindings.StaticAccessor("XRInputDevices::Get()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Scripting.RequiredByNativeCode]
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
		[Address(RVA = "0x510C700", Offset = "0x510C700", VA = "0x510C700")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x1700000C")]
	internal uint featureIndex
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x510C710", Offset = "0x510C710", VA = "0x510C710")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x510C720", Offset = "0x510C720", VA = "0x510C720", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x510C790", Offset = "0x510C790", VA = "0x510C790", Slot = "4")]
	public bool Equals(Bone other)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x510C7A0", Offset = "0x510C7A0", VA = "0x510C7A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
