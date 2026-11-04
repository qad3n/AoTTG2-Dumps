// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.RenderedText
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000050")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEngine.IMGUIModule", "UnityEditor.GraphToolsFoundationModule" })]
internal readonly struct RenderedText : IEquatable<RenderedText>, IEquatable<string>
{
	[Token(Token = "0x2000051")]
	public struct Enumerator
	{
		[Token(Token = "0x4000336")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly RenderedText m_Source;

		[Token(Token = "0x4000337")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int m_Stage;

		[Token(Token = "0x4000338")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		private int m_StageIndex;

		[Token(Token = "0x4000339")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private char m_Current;

		[Token(Token = "0x1700006E")]
		public char Current
		{
			[Token(Token = "0x6000240")]
			[Address(RVA = "0x3041300", Offset = "0x303F900", VA = "0x183041300")]
			get
			{
				return default(char);
			}
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x30412D0", Offset = "0x303F8D0", VA = "0x1830412D0")]
		public Enumerator(in RenderedText source)
		{
		}

		[Token(Token = "0x6000242")]
		[Address(RVA = "0x30411F0", Offset = "0x303F7F0", VA = "0x1830411F0")]
		public bool MoveNext()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000330")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string value;

	[Token(Token = "0x4000331")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly int valueStart;

	[Token(Token = "0x4000332")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public readonly int valueLength;

	[Token(Token = "0x4000333")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string suffix;

	[Token(Token = "0x4000334")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly char repeat;

	[Token(Token = "0x4000335")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public readonly int repeatCount;

	[Token(Token = "0x1700006D")]
	public int CharacterCount
	{
		[Token(Token = "0x6000239")]
		[Address(RVA = "0x3043A90", Offset = "0x3042090", VA = "0x183043A90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x3043810", Offset = "0x3041E10", VA = "0x183043810")]
	public RenderedText(string value)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x3043970", Offset = "0x3041F70", VA = "0x183043970")]
	public RenderedText(string value, string suffix)
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x30438D0", Offset = "0x3041ED0", VA = "0x1830438D0")]
	public RenderedText(string value, int start, int length, [Optional] string suffix)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x3043A30", Offset = "0x3042030", VA = "0x183043A30")]
	public RenderedText(char repeat, int repeatCount, [Optional] string suffix)
	{
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x3043730", Offset = "0x3041D30", VA = "0x183043730")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x3043260", Offset = "0x3041860", VA = "0x183043260")]
	public string CreateString()
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x30433D0", Offset = "0x30419D0", VA = "0x1830433D0", Slot = "4")]
	public bool Equals(RenderedText other)
	{
		return default(bool);
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x3043630", Offset = "0x3041C30", VA = "0x183043630", Slot = "5")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x3043450", Offset = "0x3041A50", VA = "0x183043450", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x3043770", Offset = "0x3041D70", VA = "0x183043770", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
