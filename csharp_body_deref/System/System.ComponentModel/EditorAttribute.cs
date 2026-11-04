// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.EditorAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000198")]
[AttributeUsage(AttributeTargets.All, AllowMultiple = true, Inherited = true)]
public sealed class EditorAttribute : Attribute
{
	[Token(Token = "0x4000699")]
	[FieldOffset(Offset = "0x10")]
	private string _typeId;

	[Token(Token = "0x170001FD")]
	public string EditorBaseTypeName
	{
		[Token(Token = "0x6000A55")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FE")]
	public string EditorTypeName
	{
		[Token(Token = "0x6000A56")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FF")]
	public override object TypeId
	{
		[Token(Token = "0x6000A57")]
		[Address(RVA = "0x289C1A0", Offset = "0x289A7A0", VA = "0x18289C1A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x289C140", Offset = "0x289A740", VA = "0x18289C140")]
	public EditorAttribute()
	{
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x289C090", Offset = "0x289A690", VA = "0x18289C090")]
	public EditorAttribute(string typeName, string baseTypeName)
	{
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x289BFD0", Offset = "0x289A5D0", VA = "0x18289BFD0")]
	public EditorAttribute(string typeName, Type baseType)
	{
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x289BF40", Offset = "0x289A540", VA = "0x18289BF40")]
	public EditorAttribute(Type type, Type baseType)
	{
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x289BE90", Offset = "0x289A490", VA = "0x18289BE90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
