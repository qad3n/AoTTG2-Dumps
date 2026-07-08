using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200000D")]
public abstract class ReflectedCloner : Cloner<object>
{
	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Type, MemberInfo[]> accessors;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Type, IOptimizedAccessor[]> optimizedAccessors;

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x497BB20", Offset = "0x497BB20", VA = "0x497BB20", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x497BB30", Offset = "0x497BB30", VA = "0x497BB30", Slot = "12")]
	public override void FillClone(Type type, ref object clone, object original, CloningContext context)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x497C9D0", Offset = "0x497C9D0", VA = "0x497C9D0")]
	private MemberInfo[] GetAccessors(Type type)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x497C2D0", Offset = "0x497C2D0", VA = "0x497C2D0")]
	private IOptimizedAccessor[] GetOptimizedAccessors(Type type)
	{
		return null;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x497CAB0", Offset = "0x497CAB0", VA = "0x497CAB0", Slot = "14")]
	protected virtual IEnumerable<MemberInfo> GetMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x497CCB0", Offset = "0x497CCB0", VA = "0x497CCB0", Slot = "15")]
	protected virtual bool IncludeField(FieldInfo field)
	{
		return default(bool);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x497CCC0", Offset = "0x497CCC0", VA = "0x497CCC0", Slot = "16")]
	protected virtual bool IncludeProperty(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x497AE40", Offset = "0x497AE40", VA = "0x497AE40")]
	protected ReflectedCloner()
	{
	}
}
