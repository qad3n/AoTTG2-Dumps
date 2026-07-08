using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x200000C")]
[UnityEngine.Bindings.NativeHeader("XRScriptingClasses.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("XRInputDevices::Get()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputDevices.h")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/XRPrefix.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
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
		[Address(RVA = "0x4DE4590", Offset = "0x4DE4590", VA = "0x4DE4590")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x1700000A")]
	internal uint featureIndex
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4DE45A0", Offset = "0x4DE45A0", VA = "0x4DE45A0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4DE45B0", Offset = "0x4DE45B0", VA = "0x4DE45B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4DE4620", Offset = "0x4DE4620", VA = "0x4DE4620", Slot = "4")]
	public bool Equals(Eyes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4DE4630", Offset = "0x4DE4630", VA = "0x4DE4630", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
