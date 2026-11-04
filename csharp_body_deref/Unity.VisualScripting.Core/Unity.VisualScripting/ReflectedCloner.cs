// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ReflectedCloner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200000D")]
public abstract class ReflectedCloner : Cloner<object>
{
	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Type, MemberInfo[]> accessors;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<Type, IOptimizedAccessor[]> optimizedAccessors;

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	public override bool Handles(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x2DB9650", Offset = "0x2DB7C50", VA = "0x182DB9650", Slot = "12")]
	public override void FillClone(Type type, ref object clone, object original, CloningContext context)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x2DB9BD0", Offset = "0x2DB81D0", VA = "0x182DB9BD0")]
	private MemberInfo[] GetAccessors(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x2DB9EE0", Offset = "0x2DB84E0", VA = "0x182DB9EE0")]
	private IOptimizedAccessor[] GetOptimizedAccessors(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x2DB9CC0", Offset = "0x2DB82C0", VA = "0x182DB9CC0", Slot = "14")]
	protected virtual IEnumerable<MemberInfo> GetMembers(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "15")]
	protected virtual bool IncludeField(FieldInfo field)
	{
		return default(bool);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "16")]
	protected virtual bool IncludeProperty(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x2DBA330", Offset = "0x2DB8930", VA = "0x182DBA330")]
	protected ReflectedCloner()
	{
	}
}
