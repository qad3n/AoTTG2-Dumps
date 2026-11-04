// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.PropertyContainer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Pool;

namespace Unity.Properties;

[Token(Token = "0x2000004")]
public static class PropertyContainer
{
	[Token(Token = "0x2000005")]
	private class GetPropertyVisitor : PathVisitor
	{
		[Token(Token = "0x4000007")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly ObjectPool<GetPropertyVisitor> Pool;

		[Token(Token = "0x4000008")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
		public IProperty Property;

		[Token(Token = "0x6000009")]
		[Address(RVA = "0x2FEAE90", Offset = "0x2FE9490", VA = "0x182FEAE90", Slot = "6")]
		public override void Reset()
		{
		}

		[Token(Token = "0x600000A")]
		protected override void VisitPath<TContainer, TValue>(Property<TContainer, TValue> property, ref TContainer container, ref TValue value)
		{
		}

		[Token(Token = "0x600000B")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public GetPropertyVisitor()
		{
		}
	}

	[Token(Token = "0x2000007")]
	private class GetValueVisitor<TSrcValue> : PathVisitor
	{
		[Token(Token = "0x400000A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly ObjectPool<GetValueVisitor<TSrcValue>> Pool;

		[Token(Token = "0x400000B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TSrcValue Value;

		[Token(Token = "0x6000011")]
		public override void Reset()
		{
		}

		[Token(Token = "0x6000012")]
		protected override void VisitPath<TContainer, TValue>(Property<TContainer, TValue> property, ref TContainer container, ref TValue value)
		{
		}

		[Token(Token = "0x6000013")]
		public GetValueVisitor()
		{
		}
	}

	[Token(Token = "0x6000002")]
	public static void Accept<TContainer>(IPropertyBagVisitor visitor, ref TContainer container, [Optional] VisitParameters parameters)
	{
	}

	[Token(Token = "0x6000003")]
	public static bool TryAccept<TContainer>(IPropertyBagVisitor visitor, ref TContainer container, [Optional] VisitParameters parameters)
	{
		return default(bool);
	}

	[Token(Token = "0x6000004")]
	public static bool TryAccept<TContainer>(IPropertyBagVisitor visitor, ref TContainer container, out VisitReturnCode returnCode, [Optional] VisitParameters parameters)
	{
		return default(bool);
	}

	[Token(Token = "0x6000005")]
	public static bool TryGetProperty<TContainer>(ref TContainer container, in PropertyPath path, out IProperty property)
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	public static bool TryGetProperty<TContainer>(ref TContainer container, in PropertyPath path, out IProperty property, out VisitReturnCode returnCode)
	{
		return default(bool);
	}

	[Token(Token = "0x6000007")]
	public static bool TryGetValue<TContainer, TValue>(ref TContainer container, string name, out TValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000008")]
	public static bool TryGetValue<TContainer, TValue>(ref TContainer container, in PropertyPath path, out TValue value, out VisitReturnCode returnCode)
	{
		return default(bool);
	}
}
