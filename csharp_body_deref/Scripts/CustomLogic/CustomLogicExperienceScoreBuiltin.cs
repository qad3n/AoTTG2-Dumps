// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicExperienceScoreBuiltin
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;

namespace CustomLogic;

[Token(Token = "0x2000551")]
[CompilerGenerated]
internal class CustomLogicExperienceScoreBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000552")]
	public static class Factory
	{
		[Token(Token = "0x6003178")]
		[Address(RVA = "0x2016930", Offset = "0x2014F30", VA = "0x182016930")]
		public static CustomLogicExperienceScoreBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000553")]
	public static class Bindings
	{
		[Token(Token = "0x400171B")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003179")]
		[Address(RVA = "0x1FF0D30", Offset = "0x1FEF330", VA = "0x181FF0D30")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600317A")]
		[Address(RVA = "0x2004090", Offset = "0x2002690", VA = "0x182004090")]
		public static CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __CreatePropertyBinding__ExperienceID()
		{
			return null;
		}

		[Token(Token = "0x600317B")]
		[Address(RVA = "0x20072E0", Offset = "0x20058E0", VA = "0x1820072E0")]
		public static CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __CreatePropertyBinding__Score()
		{
			return null;
		}

		[Token(Token = "0x600317C")]
		[Address(RVA = "0x2008640", Offset = "0x2006C40", VA = "0x182008640")]
		public static CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __CreatePropertyBinding__Unit()
		{
			return null;
		}

		[Token(Token = "0x600317D")]
		[Address(RVA = "0x2006070", Offset = "0x2004670", VA = "0x182006070")]
		public static CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __CreatePropertyBinding__LowerIsBetter()
		{
			return null;
		}
	}

	[Token(Token = "0x400171A")]
	[FieldOffset(Offset = "0x30")]
	private readonly ExperienceScoreRecord _record;

	[Token(Token = "0x17000939")]
	public string ExperienceID
	{
		[Token(Token = "0x6003170")]
		[Address(RVA = "0x1F79970", Offset = "0x1F77F70", VA = "0x181F79970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700093A")]
	public float Score
	{
		[Token(Token = "0x6003171")]
		[Address(RVA = "0x200CC60", Offset = "0x200B260", VA = "0x18200CC60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700093B")]
	public string Unit
	{
		[Token(Token = "0x6003172")]
		[Address(RVA = "0x200CC80", Offset = "0x200B280", VA = "0x18200CC80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700093C")]
	public bool LowerIsBetter
	{
		[Token(Token = "0x6003173")]
		[Address(RVA = "0x1F79950", Offset = "0x1F77F50", VA = "0x181F79950")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700093D")]
	public override string ClassName
	{
		[Token(Token = "0x6003174")]
		[Address(RVA = "0x200CC30", Offset = "0x200B230", VA = "0x18200CC30", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700093E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003175")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700093F")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003176")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000940")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003177")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600316F")]
	[Address(RVA = "0x200CBC0", Offset = "0x200B1C0", VA = "0x18200CBC0")]
	public CustomLogicExperienceScoreBuiltin(ExperienceScoreRecord record)
	{
	}
}
