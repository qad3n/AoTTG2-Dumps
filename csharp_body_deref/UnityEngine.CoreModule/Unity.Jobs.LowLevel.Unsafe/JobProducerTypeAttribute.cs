using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Jobs.LowLevel.Unsafe;

[Token(Token = "0x2000012")]
[AttributeUsage(AttributeTargets.Interface)]
public sealed class JobProducerTypeAttribute : Attribute
{
	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly Type _003CProducerType_003Ek__BackingField;

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4A84350", Offset = "0x4A84350", VA = "0x4A84350")]
	public JobProducerTypeAttribute(Type producerType)
	{
	}
}
