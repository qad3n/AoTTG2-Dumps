// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.InputFeatureUsage
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
		[Address(RVA = "0x510C320", Offset = "0x510C320", VA = "0x510C320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	internal InputFeatureType internalType
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x510C330", Offset = "0x510C330", VA = "0x510C330")]
		get
		{
			return default(InputFeatureType);
		}
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x510C340", Offset = "0x510C340", VA = "0x510C340", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x510C3B0", Offset = "0x510C3B0", VA = "0x510C3B0", Slot = "4")]
	public bool Equals(InputFeatureUsage other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x510C3E0", Offset = "0x510C3E0", VA = "0x510C3E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
