// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.Eyes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x200000C")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputDevices.h")]
[UnityEngine.Bindings.NativeHeader("XRScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/XRPrefix.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("XRInputDevices::Get()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public struct Eyes : IEquatable<Eyes>
{
	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x0")]
	private ulong m_DeviceId;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x8")]
	private uint m_FeatureIndex;

	[Token(Token = "0x17000009")]
	internal ulong deviceId
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x6D22DB0", Offset = "0x6D21DB0", VA = "0x6D22DB0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x1700000A")]
	internal uint featureIndex
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x6D22DC0", Offset = "0x6D21DC0", VA = "0x6D22DC0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x6D22DD0", Offset = "0x6D21DD0", VA = "0x6D22DD0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x6D22E40", Offset = "0x6D21E40", VA = "0x6D22E40", Slot = "4")]
	public bool Equals(Eyes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x6D22E50", Offset = "0x6D21E50", VA = "0x6D22E50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
