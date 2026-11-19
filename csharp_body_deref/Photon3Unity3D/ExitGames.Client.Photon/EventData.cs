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
		[Address(RVA = "0x56688F0", Offset = "0x56678F0", VA = "0x56688F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x5668920", Offset = "0x5667920", VA = "0x5668920")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public int Sender
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x5668940", Offset = "0x5667940", VA = "0x5668940")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x56689C0", Offset = "0x56679C0", VA = "0x56689C0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public object CustomData
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x56689D0", Offset = "0x56679D0", VA = "0x56689D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x5668A10", Offset = "0x5667A10", VA = "0x5668A10")]
		internal set
		{
		}
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x5668870", Offset = "0x5667870", VA = "0x5668870")]
	public EventData()
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x5668A20", Offset = "0x5667A20", VA = "0x5668A20")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x5668A60", Offset = "0x5667A60", VA = "0x5668A60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x5668AB0", Offset = "0x5667AB0", VA = "0x5668AB0")]
	public string ToStringFull()
	{
		return null;
	}
}
