using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x200000B")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
[UnityEngine.Bindings.NativeHeader("XRScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/XRPrefix.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputDevices.h")]
[UnityEngine.Bindings.StaticAccessor("XRInputDevices::Get()", UnityEngine.Bindings.StaticAccessorType.Dot)]
public struct Hand : IEquatable<Hand>
{
	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x0")]
	private ulong m_DeviceId;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x8")]
	private uint m_FeatureIndex;

	[Token(Token = "0x17000007")]
	internal ulong deviceId
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4DE44B0", Offset = "0x4DE44B0", VA = "0x4DE44B0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x17000008")]
	internal uint featureIndex
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4DE44C0", Offset = "0x4DE44C0", VA = "0x4DE44C0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4DE44D0", Offset = "0x4DE44D0", VA = "0x4DE44D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4DE4540", Offset = "0x4DE4540", VA = "0x4DE4540", Slot = "4")]
	public bool Equals(Hand other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4DE4550", Offset = "0x4DE4550", VA = "0x4DE4550", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
