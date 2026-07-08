using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x2000009")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputDevices.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct InputFeatureUsage : IEquatable<InputFeatureUsage>
{
	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x0")]
	internal string m_Name;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("m_FeatureType")]
	internal InputFeatureType m_InternalType;

	[Token(Token = "0x17000004")]
	public string name
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4DE4290", Offset = "0x4DE4290", VA = "0x4DE4290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	internal InputFeatureType internalType
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4DE42A0", Offset = "0x4DE42A0", VA = "0x4DE42A0")]
		get
		{
			return default(InputFeatureType);
		}
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4DE42B0", Offset = "0x4DE42B0", VA = "0x4DE42B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4DE4320", Offset = "0x4DE4320", VA = "0x4DE4320", Slot = "4")]
	public bool Equals(InputFeatureUsage other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4DE4350", Offset = "0x4DE4350", VA = "0x4DE4350", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
