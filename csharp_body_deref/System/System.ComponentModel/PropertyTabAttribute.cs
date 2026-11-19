// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.PropertyTabAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000154")]
[AttributeUsage(AttributeTargets.All)]
public class PropertyTabAttribute : Attribute
{
	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x10")]
	private Type[] _tabClasses;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x18")]
	private string[] _tabClassNames;

	[Token(Token = "0x170001C6")]
	public Type[] TabClasses
	{
		[Token(Token = "0x6000871")]
		[Address(RVA = "0x6230AE0", Offset = "0x622FAE0", VA = "0x6230AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C7")]
	protected string[] TabClassNames
	{
		[Token(Token = "0x6000872")]
		[Address(RVA = "0x6230E60", Offset = "0x622FE60", VA = "0x6230E60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	public PropertyTabScope[] TabScopes
	{
		[Token(Token = "0x6000873")]
		[Address(RVA = "0x6230ED0", Offset = "0x622FED0", VA = "0x6230ED0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000874")]
		[Address(RVA = "0x6230EE0", Offset = "0x622FEE0", VA = "0x6230EE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x6230620", Offset = "0x622F620", VA = "0x6230620")]
	public PropertyTabAttribute()
	{
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x62307D0", Offset = "0x622F7D0", VA = "0x62307D0")]
	public PropertyTabAttribute(Type tabClass)
	{
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x6230970", Offset = "0x622F970", VA = "0x6230970")]
	public PropertyTabAttribute(string tabClassName)
	{
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x62307E0", Offset = "0x622F7E0", VA = "0x62307E0")]
	public PropertyTabAttribute(Type tabClass, PropertyTabScope tabScope)
	{
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x6230980", Offset = "0x622F980", VA = "0x6230980")]
	public PropertyTabAttribute(string tabClassName, PropertyTabScope tabScope)
	{
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x6230EF0", Offset = "0x622FEF0", VA = "0x6230EF0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x6230F70", Offset = "0x622FF70", VA = "0x6230F70")]
	public bool Equals(PropertyTabAttribute other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x62310E0", Offset = "0x62300E0", VA = "0x62310E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x62310F0", Offset = "0x62300F0", VA = "0x62310F0")]
	protected void InitializeArrays(string[] tabClassNames, PropertyTabScope[] tabScopes)
	{
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x6231470", Offset = "0x6230470", VA = "0x6231470")]
	protected void InitializeArrays(Type[] tabClasses, PropertyTabScope[] tabScopes)
	{
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x6231100", Offset = "0x6230100", VA = "0x6231100")]
	private void InitializeArrays(string[] tabClassNames, Type[] tabClasses, PropertyTabScope[] tabScopes)
	{
	}
}
