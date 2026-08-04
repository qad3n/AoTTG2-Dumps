// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCommandsBuiltin
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCommandsBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003F4")]
[CompilerGenerated]
internal class CustomLogicCommandsBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20003F5")]
	public static class Factory
	{
		[Token(Token = "0x6002817")]
		[Address(RVA = "0x40B6310", Offset = "0x40B6310", VA = "0x40B6310")]
		public static CustomLogicCommandsBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003F6")]
	public static class Bindings
	{
		[Token(Token = "0x40010CF")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002818")]
		[Address(RVA = "0x40B6430", Offset = "0x40B6430", VA = "0x40B6430")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002819")]
		[Address(RVA = "0x40B6570", Offset = "0x40B6570", VA = "0x40B6570")]
		public static CLMethodBinding<CustomLogicCommandsBuiltin> __CreateMethodBinding__RegisterCommand()
		{
			return null;
		}

		[Token(Token = "0x600281A")]
		[Address(RVA = "0x40B66C0", Offset = "0x40B66C0", VA = "0x40B66C0")]
		public static CLMethodBinding<CustomLogicCommandsBuiltin> __CreateMethodBinding__ParseCommands()
		{
			return null;
		}
	}

	[Token(Token = "0x17000849")]
	public override string ClassName
	{
		[Token(Token = "0x6002813")]
		[Address(RVA = "0x40B62B0", Offset = "0x40B62B0", VA = "0x40B62B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700084A")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002814")]
		[Address(RVA = "0x40B62E0", Offset = "0x40B62E0", VA = "0x40B62E0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700084B")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002815")]
		[Address(RVA = "0x40B62F0", Offset = "0x40B62F0", VA = "0x40B62F0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700084C")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002816")]
		[Address(RVA = "0x40B6300", Offset = "0x40B6300", VA = "0x40B6300", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600280F")]
	[Address(RVA = "0x40B6070", Offset = "0x40B6070", VA = "0x40B6070")]
	public CustomLogicCommandsBuiltin()
	{
	}

	[Token(Token = "0x6002810")]
	[Address(RVA = "0x40B60E0", Offset = "0x40B60E0", VA = "0x40B60E0")]
	public static bool RegisterCommand(string command, UserMethod method, string description = "", string autofill = "None")
	{
		return default(bool);
	}

	[Token(Token = "0x6002811")]
	[Address(RVA = "0x40B61D0", Offset = "0x40B61D0", VA = "0x40B61D0")]
	public static CustomLogicListBuiltin ParseCommands(string text)
	{
		return null;
	}

	[Token(Token = "0x6002812")]
	[Address(RVA = "0x40B6250", Offset = "0x40B6250", VA = "0x40B6250")]
	public static void ClearCommands()
	{
	}
}
