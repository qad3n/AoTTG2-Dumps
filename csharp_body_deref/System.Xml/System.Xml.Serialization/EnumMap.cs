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
			[Address(RVA = "0x613C670", Offset = "0x613B670", VA = "0x613C670")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003DE")]
		public string EnumName
		{
			[Token(Token = "0x6000F11")]
			[Address(RVA = "0x613C680", Offset = "0x613B680", VA = "0x613C680")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170003DF")]
		public long Value
		{
			[Token(Token = "0x6000F12")]
			[Address(RVA = "0x613C690", Offset = "0x613B690", VA = "0x613C690")]
			get
			{
				return default(long);
			}
		}

		[Token(Token = "0x6000F0F")]
		[Address(RVA = "0x613C620", Offset = "0x613B620", VA = "0x613C620")]
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
		[Address(RVA = "0x613C220", Offset = "0x613B220", VA = "0x613C220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003DA")]
	public string[] EnumNames
	{
		[Token(Token = "0x6000F0A")]
		[Address(RVA = "0x613C230", Offset = "0x613B230", VA = "0x613C230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DB")]
	public string[] XmlNames
	{
		[Token(Token = "0x6000F0B")]
		[Address(RVA = "0x613C240", Offset = "0x613B240", VA = "0x613C240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DC")]
	public long[] Values
	{
		[Token(Token = "0x6000F0C")]
		[Address(RVA = "0x613C250", Offset = "0x613B250", VA = "0x613C250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x613C080", Offset = "0x613B080", VA = "0x613C080")]
	public EnumMap(EnumMapMember[] members, bool isFlags)
	{
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x61358D0", Offset = "0x61348D0", VA = "0x61358D0")]
	public string GetXmlName(string typeName, object enumValue)
	{
		return null;
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x613C260", Offset = "0x613B260", VA = "0x613C260")]
	public string GetEnumName(string typeName, string xmlName)
	{
		return null;
	}
}
