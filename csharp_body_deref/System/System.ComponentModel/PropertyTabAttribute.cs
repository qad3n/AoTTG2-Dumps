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

[Token(Token = "0x2000288")]
[AttributeUsage(AttributeTargets.All)]
public class PropertyTabAttribute : Attribute
{
	[Token(Token = "0x4000D52")]
	[FieldOffset(Offset = "0x10")]
	private Type[] _tabClasses;

	[Token(Token = "0x4000D53")]
	[FieldOffset(Offset = "0x18")]
	private string[] _tabClassNames;

	[Token(Token = "0x17000386")]
	public Type[] TabClasses
	{
		[Token(Token = "0x6000FE9")]
		[Address(RVA = "0x4890A00", Offset = "0x4890A00", VA = "0x4890A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000387")]
	protected string[] TabClassNames
	{
		[Token(Token = "0x6000FEA")]
		[Address(RVA = "0x4890D70", Offset = "0x4890D70", VA = "0x4890D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000388")]
	public PropertyTabScope[] TabScopes
	{
		[Token(Token = "0x6000FEB")]
		[Address(RVA = "0x4890DE0", Offset = "0x4890DE0", VA = "0x4890DE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FEC")]
		[Address(RVA = "0x4890DF0", Offset = "0x4890DF0", VA = "0x4890DF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x4890540", Offset = "0x4890540", VA = "0x4890540")]
	public PropertyTabAttribute()
	{
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x48906F0", Offset = "0x48906F0", VA = "0x48906F0")]
	public PropertyTabAttribute(Type tabClass)
	{
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x4890890", Offset = "0x4890890", VA = "0x4890890")]
	public PropertyTabAttribute(string tabClassName)
	{
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x4890700", Offset = "0x4890700", VA = "0x4890700")]
	public PropertyTabAttribute(Type tabClass, PropertyTabScope tabScope)
	{
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x48908A0", Offset = "0x48908A0", VA = "0x48908A0")]
	public PropertyTabAttribute(string tabClassName, PropertyTabScope tabScope)
	{
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x4890E00", Offset = "0x4890E00", VA = "0x4890E00", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x4890E70", Offset = "0x4890E70", VA = "0x4890E70")]
	public bool Equals(PropertyTabAttribute other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x4890FE0", Offset = "0x4890FE0", VA = "0x4890FE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x4890FF0", Offset = "0x4890FF0", VA = "0x4890FF0")]
	protected void InitializeArrays(string[] tabClassNames, PropertyTabScope[] tabScopes)
	{
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x4891310", Offset = "0x4891310", VA = "0x4891310")]
	protected void InitializeArrays(Type[] tabClasses, PropertyTabScope[] tabScopes)
	{
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x4891000", Offset = "0x4891000", VA = "0x4891000")]
	private void InitializeArrays(string[] tabClassNames, Type[] tabClasses, PropertyTabScope[] tabScopes)
	{
	}
}
