using System;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x200018B")]
public class JTokenWriter : JsonWriter
{
	[Token(Token = "0x4000755")]
	[FieldOffset(Offset = "0x60")]
	private JContainer? _token;

	[Token(Token = "0x4000756")]
	[FieldOffset(Offset = "0x68")]
	private JContainer? _parent;

	[Token(Token = "0x4000757")]
	[FieldOffset(Offset = "0x70")]
	private JValue? _value;

	[Token(Token = "0x4000758")]
	[FieldOffset(Offset = "0x78")]
	private JToken? _current;

	[Token(Token = "0x1700022F")]
	public JToken? CurrentToken
	{
		[Token(Token = "0x6000D88")]
		[Address(RVA = "0x3B35460", Offset = "0x3B35460", VA = "0x3B35460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000230")]
	public JToken? Token
	{
		[Token(Token = "0x6000D89")]
		[Address(RVA = "0x3B35470", Offset = "0x3B35470", VA = "0x3B35470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x3B35370", Offset = "0x3B35370", VA = "0x3B35370", Slot = "24")]
	internal override Task WriteTokenAsync(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x3B35490", Offset = "0x3B35490", VA = "0x3B35490")]
	public JTokenWriter(JContainer container)
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x3B35530", Offset = "0x3B35530", VA = "0x3B35530")]
	public JTokenWriter()
	{
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x3B355A0", Offset = "0x3B355A0", VA = "0x3B355A0", Slot = "66")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x3B355B0", Offset = "0x3B355B0", VA = "0x3B355B0", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x3B355C0", Offset = "0x3B355C0", VA = "0x3B355C0", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x3B35660", Offset = "0x3B35660", VA = "0x3B35660")]
	private void AddParent(JContainer container)
	{
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x3B356C0", Offset = "0x3B356C0", VA = "0x3B356C0")]
	private void RemoveParent()
	{
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x3B35730", Offset = "0x3B35730", VA = "0x3B35730", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x3B357D0", Offset = "0x3B357D0", VA = "0x3B357D0", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x3B35880", Offset = "0x3B35880", VA = "0x3B35880", Slot = "78")]
	protected override void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x3B35890", Offset = "0x3B35890", VA = "0x3B35890", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x3B35990", Offset = "0x3B35990", VA = "0x3B35990")]
	private void AddRawValue(object? value, JTokenType type, JsonToken token)
	{
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x3B35AB0", Offset = "0x3B35AB0", VA = "0x3B35AB0")]
	internal void AddJValue(JValue? value, JsonToken token)
	{
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x3B35C10", Offset = "0x3B35C10", VA = "0x3B35C10", Slot = "123")]
	public override void WriteValue(object? value)
	{
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x3B35C90", Offset = "0x3B35C90", VA = "0x3B35C90", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x3B35CB0", Offset = "0x3B35CB0", VA = "0x3B35CB0", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x3B35D60", Offset = "0x3B35D60", VA = "0x3B35D60", Slot = "84")]
	public override void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x3B35DD0", Offset = "0x3B35DD0", VA = "0x3B35DD0", Slot = "124")]
	public override void WriteComment(string? text)
	{
	}

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x3B35F20", Offset = "0x3B35F20", VA = "0x3B35F20", Slot = "86")]
	public override void WriteValue(string? value)
	{
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x3B36040", Offset = "0x3B36040", VA = "0x3B36040", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x3B36090", Offset = "0x3B36090", VA = "0x3B36090", Slot = "88")]
	[CLSCompliant(false)]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x3B360E0", Offset = "0x3B360E0", VA = "0x3B360E0", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x3B36200", Offset = "0x3B36200", VA = "0x3B36200", Slot = "90")]
	[CLSCompliant(false)]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x3B36360", Offset = "0x3B36360", VA = "0x3B36360", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x3B364E0", Offset = "0x3B364E0", VA = "0x3B364E0", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x3B36610", Offset = "0x3B36610", VA = "0x3B36610", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x3B36720", Offset = "0x3B36720", VA = "0x3B36720", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x3B36770", Offset = "0x3B36770", VA = "0x3B36770", Slot = "95")]
	[CLSCompliant(false)]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x3B367C0", Offset = "0x3B367C0", VA = "0x3B367C0", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x3B368E0", Offset = "0x3B368E0", VA = "0x3B368E0", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x3B36930", Offset = "0x3B36930", VA = "0x3B36930", Slot = "98")]
	[CLSCompliant(false)]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x3B36980", Offset = "0x3B36980", VA = "0x3B36980", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x3B36AB0", Offset = "0x3B36AB0", VA = "0x3B36AB0", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x3B36BF0", Offset = "0x3B36BF0", VA = "0x3B36BF0", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x3B36D30", Offset = "0x3B36D30", VA = "0x3B36D30", Slot = "121")]
	public override void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x3B36DE0", Offset = "0x3B36DE0", VA = "0x3B36DE0", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x3B36EF0", Offset = "0x3B36EF0", VA = "0x3B36EF0", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x3B37020", Offset = "0x3B37020", VA = "0x3B37020", Slot = "122")]
	public override void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x3B37140", Offset = "0x3B37140", VA = "0x3B37140", Slot = "77")]
	internal override void WriteToken(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments)
	{
	}
}
