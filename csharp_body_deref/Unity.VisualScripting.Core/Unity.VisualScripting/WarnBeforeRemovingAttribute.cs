// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.WarnBeforeRemovingAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000052")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public sealed class WarnBeforeRemovingAttribute : Attribute
{
	[Token(Token = "0x17000076")]
	public string warningTitle
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x4CA4170", Offset = "0x4CA4170", VA = "0x4CA4170")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	public string warningMessage
	{
		[Token(Token = "0x6000217")]
		[Address(RVA = "0x4CA4180", Offset = "0x4CA4180", VA = "0x4CA4180")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4CA4130", Offset = "0x4CA4130", VA = "0x4CA4130")]
	public WarnBeforeRemovingAttribute(string warningTitle, string warningMessage)
	{
	}
}
