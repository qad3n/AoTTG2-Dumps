// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.XR.InputDevice
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
		[Address(RVA = "0x510C440", Offset = "0x510C440", VA = "0x510C440")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x510C430", Offset = "0x510C430", VA = "0x510C430")]
	internal InputDevice(ulong deviceId)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x510C460", Offset = "0x510C460", VA = "0x510C460", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x510C4E0", Offset = "0x510C4E0", VA = "0x510C4E0", Slot = "4")]
	public bool Equals(InputDevice other)
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x510C510", Offset = "0x510C510", VA = "0x510C510", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
