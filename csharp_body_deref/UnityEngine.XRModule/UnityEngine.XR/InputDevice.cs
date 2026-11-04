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
		[Address(RVA = "0x33132B0", Offset = "0x33118B0", VA = "0x1833132B0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x33132A0", Offset = "0x33118A0", VA = "0x1833132A0")]
	internal InputDevice(ulong deviceId)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x33131A0", Offset = "0x33117A0", VA = "0x1833131A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x3313240", Offset = "0x3311840", VA = "0x183313240", Slot = "4")]
	public bool Equals(InputDevice other)
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x3313270", Offset = "0x3311870", VA = "0x183313270", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
