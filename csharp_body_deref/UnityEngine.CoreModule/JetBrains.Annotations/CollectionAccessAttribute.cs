using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace JetBrains.Annotations;

[Token(Token = "0x200006D")]
[AttributeUsage(AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property)]
public sealed class CollectionAccessAttribute : Attribute
{
	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly CollectionAccessType _003CCollectionAccessType_003Ek__BackingField;

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x4A866F0", Offset = "0x4A866F0", VA = "0x4A866F0")]
	public CollectionAccessAttribute(CollectionAccessType collectionAccessType)
	{
	}
}
