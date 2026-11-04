// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AttributeHelperEngine
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000170")]
internal class AttributeHelperEngine
{
	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x0")]
	public static DisallowMultipleComponent[] _disallowMultipleComponentArray;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x8")]
	public static ExecuteInEditMode[] _executeInEditModeArray;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x10")]
	public static RequireComponent[] _requireComponentArray;

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x2F0F760", Offset = "0x2F0DD60", VA = "0x182F0F760")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static Type GetParentTypeDisallowingMultipleInclusion(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x2F0F880", Offset = "0x2F0DE80", VA = "0x182F0F880")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static Type[] GetRequiredComponents(Type klass)
	{
		return null;
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x2F0F660", Offset = "0x2F0DC60", VA = "0x182F0F660")]
	private static int GetExecuteMode(Type klass)
	{
		return default(int);
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x2F0F410", Offset = "0x2F0DA10", VA = "0x182F0F410")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static int CheckIsEditorScript(Type klass)
	{
		return default(int);
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x2F0F5F0", Offset = "0x2F0DBF0", VA = "0x182F0F5F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static int GetDefaultExecutionOrderFor(Type klass)
	{
		return default(int);
	}

	[Token(Token = "0x6000CB2")]
	private static T GetCustomAttributeOfType<T>(Type klass) where T : Attribute
	{
		return null;
	}
}
