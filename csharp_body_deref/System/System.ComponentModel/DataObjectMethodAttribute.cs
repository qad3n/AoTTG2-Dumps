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
		[Address(RVA = "0x4569890", Offset = "0x4569890", VA = "0x4569890")]
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
		[Address(RVA = "0x45698A0", Offset = "0x45698A0", VA = "0x45698A0")]
		[CompilerGenerated]
		get
		{
			return default(DataObjectMethodType);
		}
	}

	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x4569850", Offset = "0x4569850", VA = "0x4569850")]
	public DataObjectMethodAttribute(DataObjectMethodType methodType)
	{
	}

	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x4569870", Offset = "0x4569870", VA = "0x4569870")]
	public DataObjectMethodAttribute(DataObjectMethodType methodType, bool isDefault)
	{
	}

	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x45698B0", Offset = "0x45698B0", VA = "0x45698B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x4569940", Offset = "0x4569940", VA = "0x4569940", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x4569990", Offset = "0x4569990", VA = "0x4569990", Slot = "5")]
	public override bool Match(object obj)
	{
		return default(bool);
	}
}
