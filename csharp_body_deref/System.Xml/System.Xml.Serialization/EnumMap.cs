// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.EnumMap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000156")]
internal class EnumMap : ObjectMap
{
	[Token(Token = "0x2000157")]
	public class EnumMapMember
	{
		[Token(Token = "0x4000711")]
		[FieldOffset(Offset = "0x10")]
		private readonly string _xmlName;

		[Token(Token = "0x4000712")]
		[FieldOffset(Offset = "0x18")]
		private readonly string _enumName;

		[Token(Token = "0x4000713")]
		[FieldOffset(Offset = "0x20")]
		private readonly long _value;

		[Token(Token = "0x170003DD")]
		public string XmlName
		{
			[Token(Token = "0x6000F10")]
			[Address(RVA = "0x483D7A0", Offset = "0x483D7A0", VA = "0x483D7A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003DE")]
		public string EnumName
		{
			[Token(Token = "0x6000F11")]
			[Address(RVA = "0x483D7B0", Offset = "0x483D7B0", VA = "0x483D7B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003DF")]
		public long Value
		{
			[Token(Token = "0x6000F12")]
			[Address(RVA = "0x483D7C0", Offset = "0x483D7C0", VA = "0x483D7C0")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x6000F0F")]
		[Address(RVA = "0x483D750", Offset = "0x483D750", VA = "0x483D750")]
		public EnumMapMember(string xmlName, string enumName, long value)
		{
		}
	}

	[Token(Token = "0x400070C")]
	[FieldOffset(Offset = "0x10")]
	private readonly EnumMapMember[] _members;

	[Token(Token = "0x400070D")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool _isFlags;

	[Token(Token = "0x400070E")]
	[FieldOffset(Offset = "0x20")]
	private readonly string[] _enumNames;

	[Token(Token = "0x400070F")]
	[FieldOffset(Offset = "0x28")]
	private readonly string[] _xmlNames;

	[Token(Token = "0x4000710")]
	[FieldOffset(Offset = "0x30")]
	private readonly long[] _values;

	[Token(Token = "0x170003D9")]
	public bool IsFlags
	{
		[Token(Token = "0x6000F09")]
		[Address(RVA = "0x483D350", Offset = "0x483D350", VA = "0x483D350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003DA")]
	public string[] EnumNames
	{
		[Token(Token = "0x6000F0A")]
		[Address(RVA = "0x483D360", Offset = "0x483D360", VA = "0x483D360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DB")]
	public string[] XmlNames
	{
		[Token(Token = "0x6000F0B")]
		[Address(RVA = "0x483D370", Offset = "0x483D370", VA = "0x483D370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DC")]
	public long[] Values
	{
		[Token(Token = "0x6000F0C")]
		[Address(RVA = "0x483D380", Offset = "0x483D380", VA = "0x483D380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x483D1A0", Offset = "0x483D1A0", VA = "0x483D1A0")]
	public EnumMap(EnumMapMember[] members, bool isFlags)
	{
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x4836250", Offset = "0x4836250", VA = "0x4836250")]
	public string GetXmlName(string typeName, object enumValue)
	{
		return null;
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x483D390", Offset = "0x483D390", VA = "0x483D390")]
	public string GetEnumName(string typeName, string xmlName)
	{
		return null;
	}
}
