// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DataObjectMethodAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200027E")]
[AttributeUsage(AttributeTargets.Method)]
public sealed class DataObjectMethodAttribute : Attribute
{
	[Token(Token = "0x1700037D")]
	public bool IsDefault
	{
		[Token(Token = "0x6000FAF")]
		[Address(RVA = "0x488E990", Offset = "0x488E990", VA = "0x488E990")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700037E")]
	public DataObjectMethodType MethodType
	{
		[Token(Token = "0x6000FB0")]
		[Address(RVA = "0x488E9A0", Offset = "0x488E9A0", VA = "0x488E9A0")]
		[CompilerGenerated]
		get
		{
			return default(DataObjectMethodType);
		}
	}

	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x488E950", Offset = "0x488E950", VA = "0x488E950")]
	public DataObjectMethodAttribute(DataObjectMethodType methodType)
	{
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x488E970", Offset = "0x488E970", VA = "0x488E970")]
	public DataObjectMethodAttribute(DataObjectMethodType methodType, bool isDefault)
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x488E9B0", Offset = "0x488E9B0", VA = "0x488E9B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x488EA40", Offset = "0x488EA40", VA = "0x488EA40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x488EA90", Offset = "0x488EA90", VA = "0x488EA90", Slot = "5")]
	public override bool Match(object obj)
	{
		return default(bool);
	}
}
