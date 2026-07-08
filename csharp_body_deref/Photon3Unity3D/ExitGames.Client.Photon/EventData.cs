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
		[Address(RVA = "0x3B83A80", Offset = "0x3B83A80", VA = "0x3B83A80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x3B83AB0", Offset = "0x3B83AB0", VA = "0x3B83AB0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public int Sender
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x3B83AD0", Offset = "0x3B83AD0", VA = "0x3B83AD0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x3B83B50", Offset = "0x3B83B50", VA = "0x3B83B50")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public object CustomData
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x3B83B60", Offset = "0x3B83B60", VA = "0x3B83B60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x3B83BA0", Offset = "0x3B83BA0", VA = "0x3B83BA0")]
		internal set
		{
		}
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x3B83A00", Offset = "0x3B83A00", VA = "0x3B83A00")]
	public EventData()
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x3B83BB0", Offset = "0x3B83BB0", VA = "0x3B83BB0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x3B83BF0", Offset = "0x3B83BF0", VA = "0x3B83BF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x3B83C40", Offset = "0x3B83C40", VA = "0x3B83C40")]
	public string ToStringFull()
	{
		return null;
	}
}
