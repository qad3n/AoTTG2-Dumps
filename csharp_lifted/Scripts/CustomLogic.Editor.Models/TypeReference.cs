// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.Models.TypeReference
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/Models/TypeReference.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x2000673")]
internal class TypeReference
{
	[Token(Token = "0x4001C93")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x4001C94")]
	[FieldOffset(Offset = "0x18")]
	public TypeReference[] Arguments;

	[Token(Token = "0x6003E05")]
	[Address(RVA = "0x5A97E70", Offset = "0x5A96E70", VA = "0x5A97E70")]
	public TypeReference(string name)
	{
		// Lifted from source/cpp/CustomLogic/Editor/Models/TypeReference.c (CustomLogic.Editor.Models.TypeReference$$.ctor): 8 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		MethodInfo pMVar3;
		Il2CppClass pIVar4;

		base();
		this.Name = name;
		pMVar3 = MethodInfo_System_Array_Empty_TypeReference;
		if ((MethodInfo_System_Array_Empty_TypeReference.field7_0x38).methodMetadataHandle == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_TypeReference);
			pIVar4 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_TypeReference.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
		}
		this.Arguments = *(TypeReference[]*)pIVar4.static_fields;
		return;
	}

	[Token(Token = "0x6003E06")]
	[Address(RVA = "0x5A97F60", Offset = "0x5A96F60", VA = "0x5A97F60")]
	public TypeReference(string name, TypeReference[] arguments)
	{
		// Lifted from source/cpp/CustomLogic/Editor/Models/TypeReference.c (CustomLogic.Editor.Models.TypeReference$$.ctor): clean
		base();
		this.Name = name;
		this.Arguments = arguments;
		return;
	}
}
