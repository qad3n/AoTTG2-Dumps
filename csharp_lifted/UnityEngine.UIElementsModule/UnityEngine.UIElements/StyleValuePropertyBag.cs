// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleValuePropertyBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000428")]
internal class StyleValuePropertyBag<TContainer, TValue> : ContainerPropertyBag<TContainer> where TContainer : IStyleValue<TValue>
{
	[Token(Token = "0x2000429")]
	private class ValueProperty : Property<TContainer, TValue>
	{
		[Token(Token = "0x170008E9")]
		public override string Name
		{
			[Token(Token = "0x60020E3")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170008EA")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60020E4")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60020E5")]
		public override TValue GetValue(ref TContainer container)
		{
			return (TValue)null;
		}

		[Token(Token = "0x60020E6")]
		public override void SetValue(ref TContainer container, TValue value)
		{
		}

		[Token(Token = "0x60020E7")]
		public ValueProperty()
		{
		}
	}

	[Token(Token = "0x200042A")]
	private class KeywordProperty : Property<TContainer, StyleKeyword>
	{
		[Token(Token = "0x170008EB")]
		public override string Name
		{
			[Token(Token = "0x60020E8")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170008EC")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x60020E9")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60020EA")]
		public override StyleKeyword GetValue(ref TContainer container)
		{
			return default(StyleKeyword);
		}

		[Token(Token = "0x60020EB")]
		public override void SetValue(ref TContainer container, StyleKeyword value)
		{
		}

		[Token(Token = "0x60020EC")]
		public KeywordProperty()
		{
		}
	}

	[Token(Token = "0x60020E2")]
	public StyleValuePropertyBag()
	{
	}
}
