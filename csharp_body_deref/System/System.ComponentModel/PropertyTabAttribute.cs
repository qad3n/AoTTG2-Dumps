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

[Token(Token = "0x2000193")]
[AttributeUsage(AttributeTargets.All)]
public class PropertyTabAttribute : Attribute
{
	[Token(Token = "0x4000689")]
	[FieldOffset(Offset = "0x10")]
	private Type[] _tabClasses;

	[Token(Token = "0x400068A")]
	[FieldOffset(Offset = "0x18")]
	private string[] _tabClassNames;

	[Token(Token = "0x170001F5")]
	public Type[] TabClasses
	{
		[Token(Token = "0x6000A31")]
		[Address(RVA = "0x28ACC00", Offset = "0x28AB200", VA = "0x1828ACC00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F6")]
	protected string[] TabClassNames
	{
		[Token(Token = "0x6000A32")]
		[Address(RVA = "0x28ACB80", Offset = "0x28AB180", VA = "0x1828ACB80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F7")]
	public PropertyTabScope[] TabScopes
	{
		[Token(Token = "0x6000A33")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A34")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x28AC5D0", Offset = "0x28AABD0", VA = "0x1828AC5D0")]
	public PropertyTabAttribute()
	{
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x28ACA70", Offset = "0x28AB070", VA = "0x1828ACA70")]
	public PropertyTabAttribute(Type tabClass)
	{
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x28AC990", Offset = "0x28AAF90", VA = "0x1828AC990")]
	public PropertyTabAttribute(string tabClassName)
	{
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x28AC810", Offset = "0x28AAE10", VA = "0x1828AC810")]
	public PropertyTabAttribute(Type tabClass, PropertyTabScope tabScope)
	{
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x28AC6B0", Offset = "0x28AACB0", VA = "0x1828AC6B0")]
	public PropertyTabAttribute(string tabClassName, PropertyTabScope tabScope)
	{
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x28ABE30", Offset = "0x28AA430", VA = "0x1828ABE30", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x28AC050", Offset = "0x28AA650", VA = "0x1828AC050")]
	public bool Equals(PropertyTabAttribute other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x28AC5B0", Offset = "0x28AABB0", VA = "0x1828AC5B0")]
	protected void InitializeArrays(string[] tabClassNames, PropertyTabScope[] tabScopes)
	{
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x28AC1D0", Offset = "0x28AA7D0", VA = "0x1828AC1D0")]
	protected void InitializeArrays(Type[] tabClasses, PropertyTabScope[] tabScopes)
	{
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x28AC1F0", Offset = "0x28AA7F0", VA = "0x1828AC1F0")]
	private void InitializeArrays(string[] tabClassNames, Type[] tabClasses, PropertyTabScope[] tabScopes)
	{
	}
}
