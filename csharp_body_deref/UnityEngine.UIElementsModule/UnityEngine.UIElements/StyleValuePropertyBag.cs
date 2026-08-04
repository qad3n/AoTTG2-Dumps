// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleValuePropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000386")]
internal class StyleValuePropertyBag<TContainer, TValue> : ContainerPropertyBag<TContainer> where TContainer : IStyleValue<TValue>
{
	[Token(Token = "0x2000387")]
	private class ValueProperty : Property<TContainer, TValue>
	{
		[Token(Token = "0x4000A99")]
		[FieldOffset(Offset = "0x0")]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		[CompilerGenerated]
		private readonly bool _003CIsReadOnly_003Ek__BackingField;

		[Token(Token = "0x17000653")]
		public override string Name
		{
			[Token(Token = "0x60016F9")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016FA")]
		public ValueProperty()
		{
		}
	}

	[Token(Token = "0x2000388")]
	private class KeywordProperty : Property<TContainer, StyleKeyword>
	{
		[Token(Token = "0x4000A9B")]
		[FieldOffset(Offset = "0x0")]
		[DebuggerBrowsable(DebuggerBrowsableState.Never)]
		[CompilerGenerated]
		private readonly bool _003CIsReadOnly_003Ek__BackingField;

		[Token(Token = "0x17000654")]
		public override string Name
		{
			[Token(Token = "0x60016FB")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016FC")]
		public KeywordProperty()
		{
		}
	}

	[Token(Token = "0x60016F8")]
	public StyleValuePropertyBag()
	{
	}
}
