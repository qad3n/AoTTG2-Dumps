// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.RenderedText
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x6A48670", Offset = "0x6A47670", VA = "0x6A48670")]
			get
			{
				return default(char);
			}
		}

		[Token(Token = "0x6000241")]
		[Address(RVA = "0x6A48090", Offset = "0x6A47090", VA = "0x6A48090")]
		public Enumerator(in RenderedText source)
		{
		}

		[Token(Token = "0x6000242")]
		[Address(RVA = "0x6A480C0", Offset = "0x6A470C0", VA = "0x6A480C0")]
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
		[Address(RVA = "0x6A48030", Offset = "0x6A47030", VA = "0x6A48030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x6A464F0", Offset = "0x6A454F0", VA = "0x6A464F0")]
	public RenderedText(string value)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x6A47F10", Offset = "0x6A46F10", VA = "0x6A47F10")]
	public RenderedText(string value, string suffix)
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x6A47E50", Offset = "0x6A46E50", VA = "0x6A47E50")]
	public RenderedText(string value, int start, int length, [Optional] string suffix)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x6A47FD0", Offset = "0x6A46FD0", VA = "0x6A47FD0")]
	public RenderedText(char repeat, int repeatCount, [Optional] string suffix)
	{
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x6A48050", Offset = "0x6A47050", VA = "0x6A48050")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x6A46090", Offset = "0x6A45090", VA = "0x6A46090")]
	public string CreateString()
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x6A46950", Offset = "0x6A45950", VA = "0x6A46950", Slot = "4")]
	public bool Equals(RenderedText other)
	{
		return default(bool);
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x6A48160", Offset = "0x6A47160", VA = "0x6A48160", Slot = "5")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x6A484D0", Offset = "0x6A474D0", VA = "0x6A484D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x6A485D0", Offset = "0x6A475D0", VA = "0x6A485D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
