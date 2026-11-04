// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.EventData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000030")]
public class EventData
{
	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x10")]
	public byte Code;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x18")]
	public readonly ParameterDictionary Parameters;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x20")]
	public byte SenderKey;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x24")]
	private int sender;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x28")]
	public byte CustomDataKey;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x30")]
	private object customData;

	[Token(Token = "0x1700008B")]
	public object this[byte key]
	{
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x1CCE200", Offset = "0x1CCC800", VA = "0x181CCE200")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x1CCE2B0", Offset = "0x1CCC8B0", VA = "0x181CCE2B0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public int Sender
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x1CCE240", Offset = "0x1CCC840", VA = "0x181CCE240")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public object CustomData
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x1CCE1C0", Offset = "0x1CCC7C0", VA = "0x181CCE1C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		internal set
		{
		}
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x1CCE140", Offset = "0x1CCC740", VA = "0x181CCE140")]
	public EventData()
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x1CCDFF0", Offset = "0x1CCC5F0", VA = "0x181CCDFF0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x1CCE0F0", Offset = "0x1CCC6F0", VA = "0x181CCE0F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x1CCE040", Offset = "0x1CCC640", VA = "0x181CCE040")]
	public string ToStringFull()
	{
		return null;
	}
}
