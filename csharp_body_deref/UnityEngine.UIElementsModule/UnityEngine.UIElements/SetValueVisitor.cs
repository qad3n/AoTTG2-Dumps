// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.SetValueVisitor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Pool;

namespace UnityEngine.UIElements;

[Token(Token = "0x200017B")]
internal class SetValueVisitor<TSrcValue> : PathVisitor
{
	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0x0")]
	public static readonly UnityEngine.Pool.ObjectPool<SetValueVisitor<TSrcValue>> Pool;

	[Token(Token = "0x40006D1")]
	[FieldOffset(Offset = "0x0")]
	public TSrcValue Value;

	[Token(Token = "0x17000208")]
	public ConverterGroup group
	{
		[Token(Token = "0x6000ACD")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000ACE")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000ACF")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000AD0")]
	protected override void VisitPath<TContainer, TValue>(Property<TContainer, TValue> property, ref TContainer container, ref TValue value)
	{
	}

	[Token(Token = "0x6000AD1")]
	public SetValueVisitor()
	{
	}
}
