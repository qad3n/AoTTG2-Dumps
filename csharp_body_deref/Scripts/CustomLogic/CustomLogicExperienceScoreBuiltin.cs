// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicExperienceScoreBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicExperienceScoreBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;

namespace CustomLogic;

[Token(Token = "0x20005B0")]
[CompilerGenerated]
internal class CustomLogicExperienceScoreBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005B1")]
	public static class Factory
	{
		[Token(Token = "0x6003404")]
		[Address(RVA = "0x59CB250", Offset = "0x59CA250", VA = "0x59CB250")]
		public static CustomLogicExperienceScoreBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005B2")]
	public static class Bindings
	{
		[Token(Token = "0x40018BB")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003405")]
		[Address(RVA = "0x59CB2E0", Offset = "0x59CA2E0", VA = "0x59CB2E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003406")]
		[Address(RVA = "0x59CB4C0", Offset = "0x59CA4C0", VA = "0x59CB4C0")]
		public static CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __CreatePropertyBinding__ExperienceID()
		{
			return null;
		}

		[Token(Token = "0x6003407")]
		[Address(RVA = "0x59CB560", Offset = "0x59CA560", VA = "0x59CB560")]
		public static CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __CreatePropertyBinding__Score()
		{
			return null;
		}

		[Token(Token = "0x6003408")]
		[Address(RVA = "0x59CB600", Offset = "0x59CA600", VA = "0x59CB600")]
		public static CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __CreatePropertyBinding__Unit()
		{
			return null;
		}

		[Token(Token = "0x6003409")]
		[Address(RVA = "0x59CB6A0", Offset = "0x59CA6A0", VA = "0x59CB6A0")]
		public static CLPropertyBinding<CustomLogicExperienceScoreBuiltin> __CreatePropertyBinding__LowerIsBetter()
		{
			return null;
		}
	}

	[Token(Token = "0x40018BA")]
	[FieldOffset(Offset = "0x30")]
	private readonly ExperienceScoreRecord _record;

	[Token(Token = "0x17000981")]
	public string ExperienceID
	{
		[Token(Token = "0x60033FC")]
		[Address(RVA = "0x59CB170", Offset = "0x59CA170", VA = "0x59CB170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000982")]
	public float Score
	{
		[Token(Token = "0x60033FD")]
		[Address(RVA = "0x59CB190", Offset = "0x59CA190", VA = "0x59CB190")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000983")]
	public string Unit
	{
		[Token(Token = "0x60033FE")]
		[Address(RVA = "0x59CB1B0", Offset = "0x59CA1B0", VA = "0x59CB1B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000984")]
	public bool LowerIsBetter
	{
		[Token(Token = "0x60033FF")]
		[Address(RVA = "0x59CB1D0", Offset = "0x59CA1D0", VA = "0x59CB1D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000985")]
	public override string ClassName
	{
		[Token(Token = "0x6003400")]
		[Address(RVA = "0x59CB1F0", Offset = "0x59CA1F0", VA = "0x59CB1F0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000986")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003401")]
		[Address(RVA = "0x59CB220", Offset = "0x59CA220", VA = "0x59CB220", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000987")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003402")]
		[Address(RVA = "0x59CB230", Offset = "0x59CA230", VA = "0x59CB230", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000988")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003403")]
		[Address(RVA = "0x59CB240", Offset = "0x59CA240", VA = "0x59CB240", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60033FB")]
	[Address(RVA = "0x59CB100", Offset = "0x59CA100", VA = "0x59CB100")]
	public CustomLogicExperienceScoreBuiltin(ExperienceScoreRecord record)
	{
	}
}
