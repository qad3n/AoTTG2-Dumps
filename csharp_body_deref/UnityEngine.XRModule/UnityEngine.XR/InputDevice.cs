using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.XR;

[Token(Token = "0x200000A")]
[UnityEngine.Bindings.NativeConditional("ENABLE_VR")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct InputDevice : IEquatable<InputDevice>
{
	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x0")]
	private ulong m_DeviceId;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x8")]
	private bool m_Initialized;

	[Token(Token = "0x17000006")]
	private ulong deviceId
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4DE43B0", Offset = "0x4DE43B0", VA = "0x4DE43B0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4DE43A0", Offset = "0x4DE43A0", VA = "0x4DE43A0")]
	internal InputDevice(ulong deviceId)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4DE43D0", Offset = "0x4DE43D0", VA = "0x4DE43D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4DE4450", Offset = "0x4DE4450", VA = "0x4DE4450", Slot = "4")]
	public bool Equals(InputDevice other)
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4DE4480", Offset = "0x4DE4480", VA = "0x4DE4480", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
