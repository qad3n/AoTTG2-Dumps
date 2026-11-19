// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.Hand
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

[Token(Token = "0x200000B")]
[UnityEngine.Bindings.StaticAccessor("XRInputDevices::Get()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputDevices.h")]
[UnityEngine.Bindings.NativeHeader("Modules/XR/XRPrefix.h")]
[UnityEngine.Bindings.NativeHeader("XRScriptingClasses.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
[UnityEngine.Scripting.RequiredByNativeCode]
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
		[Address(RVA = "0x6D22CD0", Offset = "0x6D21CD0", VA = "0x6D22CD0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x17000008")]
	internal uint featureIndex
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x6D22CE0", Offset = "0x6D21CE0", VA = "0x6D22CE0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x6D22CF0", Offset = "0x6D21CF0", VA = "0x6D22CF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x6D22D60", Offset = "0x6D21D60", VA = "0x6D22D60", Slot = "4")]
	public bool Equals(Hand other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x6D22D70", Offset = "0x6D21D70", VA = "0x6D22D70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
