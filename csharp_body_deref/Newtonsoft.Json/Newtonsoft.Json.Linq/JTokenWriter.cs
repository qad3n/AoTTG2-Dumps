// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JTokenWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000230")]
	public JToken? Token
	{
		[Token(Token = "0x6000D89")]
		[Address(RVA = "0x1C9C010", Offset = "0x1C9A610", VA = "0x181C9C010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x1C9A8D0", Offset = "0x1C98ED0", VA = "0x181C9A8D0", Slot = "24")]
	internal override Task WriteTokenAsync(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x1C9BF70", Offset = "0x1C9A570", VA = "0x181C9BF70")]
	public JTokenWriter(JContainer container)
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x1C9BF20", Offset = "0x1C9A520", VA = "0x181C9BF20")]
	public JTokenWriter()
	{
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "66")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x1C9A3E0", Offset = "0x1C989E0", VA = "0x181C9A3E0", Slot = "67")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x1C9A830", Offset = "0x1C98E30", VA = "0x181C9A830", Slot = "68")]
	public override void WriteStartObject()
	{
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x1C9A2D0", Offset = "0x1C988D0", VA = "0x181C9A2D0")]
	private void AddParent(JContainer container)
	{
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x1C9A3F0", Offset = "0x1C989F0", VA = "0x181C9A3F0")]
	private void RemoveParent()
	{
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x1C9A6E0", Offset = "0x1C98CE0", VA = "0x181C9A6E0", Slot = "70")]
	public override void WriteStartArray()
	{
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x1C9A780", Offset = "0x1C98D80", VA = "0x181C9A780", Slot = "72")]
	public override void WriteStartConstructor(string name)
	{
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x1C9A3F0", Offset = "0x1C989F0", VA = "0x181C9A3F0", Slot = "78")]
	protected override void WriteEnd(JsonToken token)
	{
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x1C9A560", Offset = "0x1C98B60", VA = "0x181C9A560", Slot = "74")]
	public override void WritePropertyName(string name)
	{
	}

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x1C9A330", Offset = "0x1C98930", VA = "0x181C9A330")]
	private void AddRawValue(object? value, JTokenType type, JsonToken token)
	{
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x1C9A200", Offset = "0x1C98800", VA = "0x181C9A200")]
	internal void AddJValue(JValue? value, JsonToken token)
	{
	}

	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x1C9B3F0", Offset = "0x1C999F0", VA = "0x181C9B3F0", Slot = "123")]
	public override void WriteValue(object? value)
	{
	}

	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x1C9A530", Offset = "0x1C98B30", VA = "0x181C9A530", Slot = "82")]
	public override void WriteNull()
	{
	}

	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x1C9AD50", Offset = "0x1C99350", VA = "0x181C9AD50", Slot = "83")]
	public override void WriteUndefined()
	{
	}

	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x1C9A660", Offset = "0x1C98C60", VA = "0x181C9A660", Slot = "84")]
	public override void WriteRaw(string? json)
	{
	}

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x1C9A470", Offset = "0x1C98A70", VA = "0x181C9A470", Slot = "124")]
	public override void WriteComment(string? text)
	{
	}

	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x1C9AED0", Offset = "0x1C994D0", VA = "0x181C9AED0", Slot = "86")]
	public override void WriteValue(string? value)
	{
	}

	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x1C9B490", Offset = "0x1C99A90", VA = "0x181C9B490", Slot = "87")]
	public override void WriteValue(int value)
	{
	}

	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x1C9AFA0", Offset = "0x1C995A0", VA = "0x181C9AFA0", Slot = "88")]
	[CLSCompliant(false)]
	public override void WriteValue(uint value)
	{
	}

	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x1C9B4F0", Offset = "0x1C99AF0", VA = "0x181C9B4F0", Slot = "89")]
	public override void WriteValue(long value)
	{
	}

	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x1C9B210", Offset = "0x1C99810", VA = "0x181C9B210", Slot = "90")]
	[CLSCompliant(false)]
	public override void WriteValue(ulong value)
	{
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x1C9B120", Offset = "0x1C99720", VA = "0x181C9B120", Slot = "91")]
	public override void WriteValue(float value)
	{
	}

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x1C9BCE0", Offset = "0x1C9A2E0", VA = "0x181C9BCE0", Slot = "92")]
	public override void WriteValue(double value)
	{
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x1C9BA50", Offset = "0x1C9A050", VA = "0x181C9BA50", Slot = "93")]
	public override void WriteValue(bool value)
	{
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x1C9BB60", Offset = "0x1C9A160", VA = "0x181C9BB60", Slot = "94")]
	public override void WriteValue(short value)
	{
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x1C9B8F0", Offset = "0x1C99EF0", VA = "0x181C9B8F0", Slot = "95")]
	[CLSCompliant(false)]
	public override void WriteValue(ushort value)
	{
	}

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x1C9BBC0", Offset = "0x1C9A1C0", VA = "0x181C9BBC0", Slot = "96")]
	public override void WriteValue(char value)
	{
	}

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x1C9AE70", Offset = "0x1C99470", VA = "0x181C9AE70", Slot = "97")]
	public override void WriteValue(byte value)
	{
	}

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x1C9AE10", Offset = "0x1C99410", VA = "0x181C9AE10", Slot = "98")]
	[CLSCompliant(false)]
	public override void WriteValue(sbyte value)
	{
	}

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x1C9B000", Offset = "0x1C99600", VA = "0x181C9B000", Slot = "99")]
	public override void WriteValue(decimal value)
	{
	}

	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x1C9BDF0", Offset = "0x1C9A3F0", VA = "0x181C9BDF0", Slot = "100")]
	public override void WriteValue(DateTime value)
	{
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x1C9B7E0", Offset = "0x1C99DE0", VA = "0x181C9B7E0", Slot = "101")]
	public override void WriteValue(DateTimeOffset value)
	{
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x1C9B600", Offset = "0x1C99C00", VA = "0x181C9B600", Slot = "121")]
	public override void WriteValue(byte[]? value)
	{
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x1C9B950", Offset = "0x1C99F50", VA = "0x181C9B950", Slot = "103")]
	public override void WriteValue(TimeSpan value)
	{
	}

	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x1C9B6D0", Offset = "0x1C99CD0", VA = "0x181C9B6D0", Slot = "102")]
	public override void WriteValue(Guid value)
	{
	}

	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x1C9B2F0", Offset = "0x1C998F0", VA = "0x181C9B2F0", Slot = "122")]
	public override void WriteValue(Uri? value)
	{
	}

	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x1C9A9D0", Offset = "0x1C98FD0", VA = "0x181C9A9D0", Slot = "77")]
	internal override void WriteToken(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments)
	{
	}
}
