// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.RenderGraph
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;
using UnityEngine.Rendering.RendererUtils;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x200023F")]
[MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
public class RenderGraph
{
	[Token(Token = "0x2000240")]
	internal class DebugExecutionItem
	{
		[Token(Token = "0x1700021E")]
		public EntityId id
		{
			[Token(Token = "0x600107F")]
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
			[CompilerGenerated]
			get
			{
				return default(EntityId);
			}
		}

		[Token(Token = "0x1700021F")]
		public string name
		{
			[Token(Token = "0x6001080")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001081")]
		[Address(RVA = "0xC83FB0", Offset = "0xC825B0", VA = "0x180C83FB0")]
		public DebugExecutionItem(EntityId id, string name)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000241")]
	internal class DebugData
	{
		[Serializable]
		[Token(Token = "0x2000242")]
		public class ResourceLists<T>
		{
			[Token(Token = "0x4000A42")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			[SerializeField]
			private List<T> m_Textures;

			[Token(Token = "0x4000A43")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			[SerializeField]
			private List<T> m_Buffers;

			[Token(Token = "0x4000A44")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			[SerializeField]
			private List<T> m_AccelerationStructures;

			[Token(Token = "0x17000220")]
			public List<T> this[int index]
			{
				[Token(Token = "0x6001084")]
				get
				{
					return null;
				}
				[Token(Token = "0x6001085")]
				set
				{
				}
			}

			[Token(Token = "0x6001086")]
			public void Clear()
			{
			}

			[Token(Token = "0x6001087")]
			public ResourceLists()
			{
			}
		}

		[Serializable]
		[Token(Token = "0x2000243")]
		public class ResourceDataLists : ResourceLists<ResourceData>
		{
			[Token(Token = "0x6001088")]
			[Address(RVA = "0x2B80BF0", Offset = "0x2B7F1F0", VA = "0x182B80BF0")]
			public ResourceDataLists()
			{
			}
		}

		[Serializable]
		[Token(Token = "0x2000244")]
		public class SerializableNativePassAttachment
		{
			[Token(Token = "0x4000A45")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public RenderBufferLoadAction loadAction;

			[Token(Token = "0x4000A46")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
			public RenderBufferStoreAction storeAction;

			[Token(Token = "0x4000A47")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public bool memoryless;

			[Token(Token = "0x4000A48")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
			public int mipLevel;

			[Token(Token = "0x4000A49")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public int depthSlice;

			[Token(Token = "0x6001089")]
			[Address(RVA = "0x2B80F20", Offset = "0x2B7F520", VA = "0x182B80F20")]
			public SerializableNativePassAttachment(NativePassAttachment att)
			{
			}
		}

		[Serializable]
		[Token(Token = "0x2000245")]
		[DebuggerDisplay("PassDebug: {name}")]
		public struct PassData
		{
			[Serializable]
			[Token(Token = "0x2000246")]
			public class ResourceIdLists : ResourceLists<int>
			{
				[Token(Token = "0x600108A")]
				[Address(RVA = "0x2B80C30", Offset = "0x2B7F230", VA = "0x182B80C30")]
				public ResourceIdLists()
				{
				}
			}

			[Serializable]
			[Token(Token = "0x2000247")]
			public class NRPInfo
			{
				[Serializable]
				[Token(Token = "0x2000248")]
				public class NativeRenderPassInfo
				{
					[Serializable]
					[Token(Token = "0x2000249")]
					public class AttachmentInfo
					{
						[Token(Token = "0x4000A62")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
						public string resourceName;

						[Token(Token = "0x4000A63")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
						public string loadReason;

						[Token(Token = "0x4000A64")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
						public string storeReason;

						[Token(Token = "0x4000A65")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
						public string storeMsaaReason;

						[Token(Token = "0x4000A66")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
						public int attachmentIndex;

						[Token(Token = "0x4000A67")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
						public SerializableNativePassAttachment attachment;

						[Token(Token = "0x600108D")]
						[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
						public AttachmentInfo()
						{
						}
					}

					[Serializable]
					[Token(Token = "0x200024A")]
					public struct PassCompatibilityInfo
					{
						[Token(Token = "0x4000A68")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
						public string message;

						[Token(Token = "0x4000A69")]
						[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
						public bool isCompatible;
					}

					[Token(Token = "0x4000A5E")]
					[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
					public string passBreakReasoning;

					[Token(Token = "0x4000A5F")]
					[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
					public List<AttachmentInfo> attachmentInfos;

					[Token(Token = "0x4000A60")]
					[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
					public SerializedDictionary<int, PassCompatibilityInfo> passCompatibility;

					[Token(Token = "0x4000A61")]
					[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
					public List<int> mergedPassIds;

					[Token(Token = "0x600108C")]
					[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
					public NativeRenderPassInfo()
					{
					}
				}

				[Token(Token = "0x4000A56")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
				[SerializeReference]
				public NativeRenderPassInfo nativePassInfo;

				[Token(Token = "0x4000A57")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
				public List<int> textureFBFetchList;

				[Token(Token = "0x4000A58")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
				public List<int> setGlobals;

				[Token(Token = "0x4000A59")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
				public int width;

				[Token(Token = "0x4000A5A")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
				public int height;

				[Token(Token = "0x4000A5B")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
				public int volumeDepth;

				[Token(Token = "0x4000A5C")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
				public int samples;

				[Token(Token = "0x4000A5D")]
				[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
				public bool hasDepth;

				[Token(Token = "0x600108B")]
				[Address(RVA = "0x2B6B2A0", Offset = "0x2B698A0", VA = "0x182B6B2A0")]
				public NRPInfo()
				{
				}
			}

			[Token(Token = "0x4000A4A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public string name;

			[Token(Token = "0x4000A4B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public RenderGraphPassType type;

			[Token(Token = "0x4000A4C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public ResourceIdLists resourceReadLists;

			[Token(Token = "0x4000A4D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public ResourceIdLists resourceWriteLists;

			[Token(Token = "0x4000A4E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public bool culled;

			[Token(Token = "0x4000A4F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
			public bool async;

			[Token(Token = "0x4000A50")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
			public int nativeSubPassIndex;

			[Token(Token = "0x4000A51")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			public int syncToPassIndex;

			[Token(Token = "0x4000A52")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
			public int syncFromPassIndex;

			[Token(Token = "0x4000A53")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
			public bool generateDebugData;

			[Token(Token = "0x4000A54")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
			[SerializeReference]
			public NRPInfo nrpInfo;

			[Token(Token = "0x4000A55")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
			public PassScriptInfo scriptInfo;
		}

		[Serializable]
		[Token(Token = "0x200024B")]
		public class BufferResourceData
		{
			[Token(Token = "0x4000A6A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public int count;

			[Token(Token = "0x4000A6B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
			public int stride;

			[Token(Token = "0x4000A6C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public GraphicsBuffer.Target target;

			[Token(Token = "0x4000A6D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
			public GraphicsBuffer.UsageFlags usage;

			[Token(Token = "0x600108E")]
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
			public BufferResourceData()
			{
			}
		}

		[Serializable]
		[Token(Token = "0x200024C")]
		public class TextureResourceData
		{
			[Token(Token = "0x4000A6E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public int width;

			[Token(Token = "0x4000A6F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
			public int height;

			[Token(Token = "0x4000A70")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public int depth;

			[Token(Token = "0x4000A71")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
			public bool bindMS;

			[Token(Token = "0x4000A72")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public int samples;

			[Token(Token = "0x4000A73")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
			public GraphicsFormat format;

			[Token(Token = "0x4000A74")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			public bool clearBuffer;

			[Token(Token = "0x600108F")]
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
			public TextureResourceData()
			{
			}
		}

		[Serializable]
		[Token(Token = "0x200024D")]
		[DebuggerDisplay("ResourceDebug: {name} [{creationPassIndex}:{releasePassIndex}]")]
		public struct ResourceData
		{
			[Token(Token = "0x4000A75")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public string name;

			[Token(Token = "0x4000A76")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public bool imported;

			[Token(Token = "0x4000A77")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			public int creationPassIndex;

			[Token(Token = "0x4000A78")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public int releasePassIndex;

			[Token(Token = "0x4000A79")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public List<int> consumerList;

			[Token(Token = "0x4000A7A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
			public List<int> producerList;

			[Token(Token = "0x4000A7B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
			public bool memoryless;

			[Token(Token = "0x4000A7C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
			[SerializeReference]
			public TextureResourceData textureData;

			[Token(Token = "0x4000A7D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
			[SerializeReference]
			public BufferResourceData bufferData;
		}

		[Serializable]
		[Token(Token = "0x200024E")]
		public struct PassScriptInfo
		{
			[Token(Token = "0x4000A7E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public string filePath;

			[Token(Token = "0x4000A7F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public int line;
		}

		[Token(Token = "0x4000A3C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string executionName;

		[Token(Token = "0x4000A3D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public bool valid;

		[Token(Token = "0x4000A3E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		public int graphHash;

		[Token(Token = "0x4000A3F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool isNRPCompiler;

		[Token(Token = "0x4000A40")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public List<PassData> passList;

		[Token(Token = "0x4000A41")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public ResourceDataLists resourceLists;

		[Token(Token = "0x6001082")]
		[Address(RVA = "0x2B69FE0", Offset = "0x2B685E0", VA = "0x182B69FE0")]
		public DebugData(string executionName)
		{
		}

		[Token(Token = "0x6001083")]
		[Address(RVA = "0x2B69F60", Offset = "0x2B68560", VA = "0x182B69F60")]
		public void Clear()
		{
		}
	}

	[Token(Token = "0x200024F")]
	internal static class DebugDataSerialization
	{
		[Token(Token = "0x6001090")]
		[Address(RVA = "0x2B69F30", Offset = "0x2B68530", VA = "0x182B69F30")]
		public static string ToJson(DebugData debugData)
		{
			return null;
		}

		[Token(Token = "0x6001091")]
		[Address(RVA = "0x2B69EE0", Offset = "0x2B684E0", VA = "0x182B69EE0")]
		public static DebugData FromJson(string json)
		{
			return null;
		}
	}

	[Token(Token = "0x2000250")]
	internal static class RenderGraphExceptionMessages
	{
		[Token(Token = "0x4000A80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal static bool enableCaller;

		[Token(Token = "0x4000A81")]
		internal const string k_RenderGraphExecutionError = "Render Graph Execution error";

		[Token(Token = "0x4000A82")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private static readonly Dictionary<RenderGraphState, string> m_RenderGraphStateMessages;

		[Token(Token = "0x4000A83")]
		private const string k_ErrorDefaultMessage = "Invalid render graph state, impossible to log the exception.";

		[Token(Token = "0x4000A84")]
		internal const string k_NonTextureAsAttachmentError = "Only textures can be used as a fragment attachment.";

		[Token(Token = "0x4000A85")]
		internal const string k_OneResourceTwoVersionsError = "A pass is using SetAttachment or UseTexture on two versions of the same resource. Make sure you only access the latest version.";

		[Token(Token = "0x4000A86")]
		internal const string k_UseTextureRandWriteTwoVersionsError = "A pass is using UseTextureRandomWrite on two versions of the same resource.  Make sure you only access the latest version.";

		[Token(Token = "0x4000A87")]
		internal const string k_InvalidGetRenderTargetInfoResultsError = "GetRenderTargetInfo returned invalid results. Check that the width, height, and number of MSAA samples is not 0.";

		[Token(Token = "0x4000A88")]
		internal const string k_CannotDetermineSubPassFlagNoDepth = "SubPassFlag for merging cannot be determined if native pass doesn't have a depth attachment. Make sure your pass has a depth attachment.";

		[Token(Token = "0x4000A89")]
		internal const string k_AddingOlderAttachmentVersion = "The pass adds an older version while a higher version is already registered with the pass. Make sure you only access the latest version.";

		[Token(Token = "0x4000A8A")]
		internal const string k_NonIncrementalCreationCall = "Something went wrong when compiling the graph. The Creation lists must be set-up incrementally for all passes, but AddFirstUse is called in an arbitrary non-incremental way.";

		[Token(Token = "0x4000A8B")]
		internal const string k_NonIncrementalDestructionCall = "Something went wrong when compiling the graph. The Destruction lists must be set-up incrementally for all passes, AddLastUse is called in an arbitrary non-incremental way.";

		[Token(Token = "0x4000A8C")]
		internal const string k_UndisposedBuilderPreviousPass = "Finish building the previous pass first by disposing of the pass builder object before adding a new pass. You can manually dispose of the builder with 'builder.Dispose()'.";

		[Token(Token = "0x4000A8D")]
		internal const string k_WriteToVersionedResource = "The pass writes to a versioned resource handle. You can only write to unversioned resource handles to avoid branches in the resource history.";

		[Token(Token = "0x4000A8E")]
		internal const string k_WriteToResourceTwice = "The pass writes to a resource twice. You can only write the same resource once within a pass.";

		[Token(Token = "0x4000A8F")]
		internal const string k_TextureAlreadyBeingUsedThroughSetAttachment = "UseTexture is called on a texture that is already used through SetRenderAttachment. Check your code and make sure the texture is only used once.";

		[Token(Token = "0x4000A90")]
		internal const string k_SetRenderAttachmentTextureAlreadyUsed = "SetRenderAttachment is called on a texture that is already used through UseTexture/SetRenderAttachment. Check your code and make sure the texture is only used once.";

		[Token(Token = "0x4000A91")]
		internal const string k_SetRenderAttachmentOnDepthTexture = "SetRenderAttachment is called on a texture that has a depth format. Use a texture with a color format instead, or call SetRenderDepthAttachment.";

		[Token(Token = "0x4000A92")]
		internal const string k_SetRenderAttachmentOnGlobalTexture = "SetRenderAttachment is called on a texture that is currently bound to a global texture slot. Shaders might be using the texture using samplers. Make sure textures are not set as globals when using them as fragment attachments.";

		[Token(Token = "0x4000A93")]
		internal const string k_InvalidResource = "Using an invalid resource. Invalid resources can be resources leftover from a previous execution.";

		[Token(Token = "0x4000A94")]
		internal const string k_ReadWriteTransient = "This pass is reading or writing a transient resource. Transient resources are always assumed to be both read and written using 'AccessFlags.ReadWrite'.";

		[Token(Token = "0x4000A95")]
		internal const string k_MoreThanOneResourceForMRTIndex = "You can only bind a single texture to a single index in a multiple render texture (MRT). Verify your indexes are correct.";

		[Token(Token = "0x4000A96")]
		internal const string k_MoreThanOneTextureForFragInputIndex = "You can only bind a single texture to a fragment input index. Verify your indexes are correct.";

		[Token(Token = "0x4000A97")]
		internal const string k_MoreThanOneTextureRandomWriteInputIndex = "You can only bind a single texture to a random write input index. Verify your indexes are correct.";

		[Token(Token = "0x4000A98")]
		internal const string k_MultipleDepthTextures = "You can only set a single depth texture per pass.";

		[Token(Token = "0x4000A99")]
		internal const string k_LoadingMemorylessResource = "This pass is loading a resource marked as memoryless.";

		[Token(Token = "0x4000A9A")]
		internal const string k_ResolvignMemorylessResource = "This pass is storing or resolving a resource marked as memoryless";

		[Token(Token = "0x4000A9B")]
		internal const string k_RenderPassIsEmpty = "Empty render pass";

		[Token(Token = "0x4000A9C")]
		internal const string k_RenderPassHasInvalidProperties = "Invalid render pass properties. One or more properties are zero.";

		[Token(Token = "0x4000A9D")]
		internal const string k_ShadingRateImageAttachmentDoesNotMatch = "Low level rendergraph error: Shading rate image attachment in renderpass does not match.";

		[Token(Token = "0x4000A9E")]
		internal const string k_AttachmentsDoNotMatch = "Low level rendergraph error: Attachments in renderpass do not match.";

		[Token(Token = "0x4000A9F")]
		internal const string k_MultisampledShaderResolveInvalidAttachmentSetup = "Low level rendergraph error: last subpass with shader resolve must have one color attachment.";

		[Token(Token = "0x4000AA0")]
		internal const string k_MultisampledShaderResolveInputAttachmentNotMemoryless = "Low level rendergraph error: last subpass with shader resolve must have all input attachments as memoryless attachments.";

		[Token(Token = "0x4000AA1")]
		internal const string k_InvalidMRTSetup = "Multiple render texture (MRT) setup is invalid. Some indices are not used.";

		[Token(Token = "0x4000AA2")]
		internal const string k_NoDepthBufferMRT = "Setting multiple render textures (MRTs) without a depth buffer is not supported.";

		[Token(Token = "0x4000AA3")]
		internal const string k_InvalidDepthAndColorTargets = "Neither depth nor color render targets are correctly set up.";

		[Token(Token = "0x4000AA4")]
		internal const string k_InvalidResourceType = "Invalid resource type, expected texture or buffer";

		[Token(Token = "0x4000AA5")]
		internal const string k_NoRenderFunction = "RenderPass was not provided with an execute function.";

		[Token(Token = "0x4000AA6")]
		internal const string k_BeginNoActivePass = "Compiler error: Pass is marked as beginning a native sub pass but no pass is currently active.";

		[Token(Token = "0x4000AA7")]
		internal const string k_NoActivePassForSubpass = "Compiler error: Generated a subpass pass but no pass is currently active.";

		[Token(Token = "0x6001092")]
		[Address(RVA = "0x2B73E20", Offset = "0x2B72420", VA = "0x182B73E20")]
		internal static string MismatchInDimensions(string name, int fragWidth, int fragHeight, int fragVolumeDepth, ResourceUnversionedData resInfo)
		{
			return null;
		}

		[Token(Token = "0x6001093")]
		[Address(RVA = "0x2B740B0", Offset = "0x2B726B0", VA = "0x182B740B0")]
		internal static string MismatchInMSAASamlpes(string name, int expectedSamples, int actualSamples)
		{
			return null;
		}

		[Token(Token = "0x6001094")]
		[Address(RVA = "0x2B74260", Offset = "0x2B72860", VA = "0x182B74260")]
		internal static string NoGlobalTextureAtPropertyID(int propertyId)
		{
			return null;
		}

		[Token(Token = "0x6001095")]
		[Address(RVA = "0x2B742C0", Offset = "0x2B728C0", VA = "0x182B742C0")]
		internal static string UseDepthWithColorFormat(GraphicsFormat colorFormat)
		{
			return null;
		}

		[Token(Token = "0x6001096")]
		[Address(RVA = "0x2B74320", Offset = "0x2B72920", VA = "0x182B74320")]
		internal static string UseTransientTextureInWrongPass(int transientIndex)
		{
			return null;
		}

		[Token(Token = "0x6001097")]
		[Address(RVA = "0x2B73B70", Offset = "0x2B72170", VA = "0x182B73B70")]
		internal static string IncompatibleTextureUVOrigin(TextureUVOriginSelection origin, string attachmentType, string attachmentName, RenderGraphResourceType attachmentResourceType, int attachmentResourceIndex, TextureUVOriginSelection attachmentOrigin)
		{
			return null;
		}

		[Token(Token = "0x6001098")]
		[Address(RVA = "0x2B73AE0", Offset = "0x2B720E0", VA = "0x182B73AE0")]
		internal static string IncompatibleTextureUVOriginUseTexture(TextureUVOriginSelection origin)
		{
			return null;
		}

		[Token(Token = "0x6001099")]
		[Address(RVA = "0x2B74380", Offset = "0x2B72980", VA = "0x182B74380")]
		internal static string UsingLegacyRenderGraph(string passName)
		{
			return null;
		}

		[Token(Token = "0x600109A")]
		[Address(RVA = "0x2B738F0", Offset = "0x2B71EF0", VA = "0x182B738F0")]
		internal static string IncompatibleTextureUVOriginStore(string firstAttachmentName, TextureUVOriginSelection firstAttachmentOrigin, string secondAttachmentName, TextureUVOriginSelection secondAttachmentOrigin)
		{
			return null;
		}

		[Token(Token = "0x600109B")]
		[Address(RVA = "0x2B735E0", Offset = "0x2B71BE0", VA = "0x182B735E0")]
		internal static string GetExceptionMessage(RenderGraphState state)
		{
			return null;
		}

		[Token(Token = "0x600109C")]
		[Address(RVA = "0x2B73820", Offset = "0x2B71E20", VA = "0x182B73820")]
		private static string GetHigherCaller()
		{
			return null;
		}
	}

	[Token(Token = "0x2000251")]
	internal struct CompiledResourceInfo
	{
		[Token(Token = "0x4000AA8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public List<int> producers;

		[Token(Token = "0x4000AA9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public List<int> consumers;

		[Token(Token = "0x4000AAA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int refCount;

		[Token(Token = "0x4000AAB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public bool imported;

		[Token(Token = "0x600109E")]
		[Address(RVA = "0x2B68C30", Offset = "0x2B67230", VA = "0x182B68C30")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000252")]
	[DebuggerDisplay("RenderPass: {name} (Index:{index} Async:{enableAsyncCompute})")]
	internal struct CompiledPassInfo
	{
		[Token(Token = "0x4000AAC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string name;

		[Token(Token = "0x4000AAD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public int index;

		[Token(Token = "0x4000AAE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public List<int>[] resourceCreateList;

		[Token(Token = "0x4000AAF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public List<int>[] resourceReleaseList;

		[Token(Token = "0x4000AB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GraphicsFence fence;

		[Token(Token = "0x4000AB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int refCount;

		[Token(Token = "0x4000AB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public int syncToPassIndex;

		[Token(Token = "0x4000AB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int syncFromPassIndex;

		[Token(Token = "0x4000AB4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		public bool enableAsyncCompute;

		[Token(Token = "0x4000AB5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3D")]
		public bool allowPassCulling;

		[Token(Token = "0x4000AB6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3E")]
		public bool needGraphicsFence;

		[Token(Token = "0x4000AB7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3F")]
		public bool culled;

		[Token(Token = "0x4000AB8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool culledByRendererList;

		[Token(Token = "0x4000AB9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x41")]
		public bool hasSideEffect;

		[Token(Token = "0x4000ABA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x42")]
		public bool enableFoveatedRasterization;

		[Token(Token = "0x4000ABB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		public ExtendedFeatureFlags extendedFeatureFlags;

		[Token(Token = "0x4000ABC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public bool hasShadingRateImage;

		[Token(Token = "0x4000ABD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		public bool hasShadingRateStates;

		[Token(Token = "0x600109F")]
		[Address(RVA = "0x2B688E0", Offset = "0x2B66EE0", VA = "0x182B688E0")]
		public void Reset(RenderGraphPass pass, int index)
		{
		}
	}

	[Token(Token = "0x2000253")]
	internal interface ICompiledGraph
	{
		[Token(Token = "0x60010A0")]
		void Clear();
	}

	[Token(Token = "0x2000254")]
	internal class CompiledGraph : ICompiledGraph
	{
		[Token(Token = "0x4000ABE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public DynamicArray<CompiledResourceInfo>[] compiledResourcesInfos;

		[Token(Token = "0x4000ABF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public DynamicArray<CompiledPassInfo> compiledPassInfos;

		[Token(Token = "0x4000AC0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int lastExecutionFrame;

		[Token(Token = "0x60010A1")]
		[Address(RVA = "0x2B68790", Offset = "0x2B66D90", VA = "0x182B68790")]
		public CompiledGraph()
		{
		}

		[Token(Token = "0x60010A2")]
		[Address(RVA = "0x2B683C0", Offset = "0x2B669C0", VA = "0x182B683C0", Slot = "4")]
		public void Clear()
		{
		}

		[Token(Token = "0x60010A3")]
		[Address(RVA = "0x2B68450", Offset = "0x2B66A50", VA = "0x182B68450")]
		private void InitResourceInfosData(DynamicArray<CompiledResourceInfo> resourceInfos, int count)
		{
		}

		[Token(Token = "0x60010A4")]
		[Address(RVA = "0x2B685E0", Offset = "0x2B66BE0", VA = "0x182B685E0")]
		public void InitializeCompilationData(List<RenderGraphPass> passes, RenderGraphResourceRegistry resources)
		{
		}
	}

	[Token(Token = "0x2000255")]
	private class ProfilingScopePassData
	{
		[Token(Token = "0x4000AC1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public ProfilingSampler sampler;

		[Token(Token = "0x60010A5")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ProfilingScopePassData()
		{
		}
	}

	[Token(Token = "0x2000256")]
	internal delegate void OnGraphRegisteredDelegate(string graphName);

	[Token(Token = "0x2000257")]
	internal delegate void OnExecutionRegisteredDelegate(string graphName, EntityId executionId, string executionName);

	[Token(Token = "0x4000A11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private NativePassCompiler nativeCompiler;

	[Token(Token = "0x4000A12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int kMaxMRTCount;

	[Token(Token = "0x4000A14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal RenderGraphResourceRegistry m_Resources;

	[Token(Token = "0x4000A15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private RenderGraphObjectPool m_RenderGraphPool;

	[Token(Token = "0x4000A16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private RenderGraphBuilders m_builderInstance;

	[Token(Token = "0x4000A17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal List<RenderGraphPass> m_RenderPasses;

	[Token(Token = "0x4000A18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private List<RendererListHandle> m_RendererLists;

	[Token(Token = "0x4000A19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private RenderGraphDebugParams m_DebugParameters;

	[Token(Token = "0x4000A1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private RenderGraphLogger m_FrameInformationLogger;

	[Token(Token = "0x4000A1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private RenderGraphDefaultResources m_DefaultResources;

	[Token(Token = "0x4000A1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Dictionary<int, ProfilingSampler> m_DefaultProfilingSamplers;

	[Token(Token = "0x4000A1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private InternalRenderGraphContext m_RenderGraphContext;

	[Token(Token = "0x4000A1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private CommandBuffer m_PreviousCommandBuffer;

	[Token(Token = "0x4000A1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private List<int>[] m_ImmediateModeResourceList;

	[Token(Token = "0x4000A20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private RenderGraphCompilationCache m_CompilationCache;

	[Token(Token = "0x4000A21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private RenderTargetIdentifier[][] m_TempMRTArrays;

	[Token(Token = "0x4000A22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Stack<int> m_CullingStack;

	[Token(Token = "0x4000A23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private EntityId m_CurrentExecutionId;

	[Token(Token = "0x4000A24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9C")]
	private bool m_CurrentExecutionCanGenerateDebugData;

	[Token(Token = "0x4000A25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private int m_ExecutionCount;

	[Token(Token = "0x4000A26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA4")]
	private int m_CurrentFrameIndex;

	[Token(Token = "0x4000A27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private int m_CurrentImmediatePassIndex;

	[Token(Token = "0x4000A28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
	private bool m_ExecutionExceptionWasRaised;

	[Token(Token = "0x4000A29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAD")]
	private bool m_RendererListCulling;

	[Token(Token = "0x4000A2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAE")]
	private bool m_EnableCompilationCaching;

	[Token(Token = "0x4000A2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	internal static bool? s_EnableCompilationCachingForTests;

	[Token(Token = "0x4000A2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private CompiledGraph m_DefaultCompiledGraph;

	[Token(Token = "0x4000A2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private CompiledGraph m_CurrentCompiledGraph;

	[Token(Token = "0x4000A2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private RenderGraphState m_RenderGraphState;

	[Token(Token = "0x4000A2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	private RenderTextureUVOriginStrategy m_renderTextureUVOriginStrategy;

	[Token(Token = "0x4000A30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Dictionary<RenderGraph, List<DebugExecutionItem>> s_RegisteredExecutions;

	[Token(Token = "0x4000A33")]
	private const string k_BeginProfilingSamplerPassName = "BeginProfile";

	[Token(Token = "0x4000A34")]
	private const string k_EndProfilingSamplerPassName = "EndProfile";

	[Token(Token = "0x4000A35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private static OnGraphRegisteredDelegate m_onGraphRegistered;

	[Token(Token = "0x4000A36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private static OnGraphRegisteredDelegate m_onGraphUnregistered;

	[Token(Token = "0x4000A37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private static OnExecutionRegisteredDelegate m_onExecutionRegistered;

	[Token(Token = "0x4000A38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static bool s_DebugSessionWasActive;

	[Token(Token = "0x4000A39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Dictionary<int, TextureHandle> registeredGlobals;

	[Token(Token = "0x17000214")]
	public bool nativeRenderPassesEnabled
	{
		[Token(Token = "0x6000FF5")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FF6")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000215")]
	internal static bool hasAnyRenderGraphWithNativeRenderPassesEnabled
	{
		[Token(Token = "0x6000FF7")]
		[Address(RVA = "0x2B80690", Offset = "0x2B7EC90", VA = "0x182B80690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000216")]
	public string name
	{
		[Token(Token = "0x6000FF8")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FF9")]
		[Address(RVA = "0x1C42420", Offset = "0x1C40A20", VA = "0x181C42420")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000217")]
	internal RenderGraphState RenderGraphState
	{
		[Token(Token = "0x6000FFA")]
		[Address(RVA = "0x16F8DE0", Offset = "0x16F73E0", VA = "0x1816F8DE0")]
		get
		{
			return default(RenderGraphState);
		}
		[Token(Token = "0x6000FFB")]
		[Address(RVA = "0x1C43490", Offset = "0x1C41A90", VA = "0x181C43490")]
		set
		{
		}
	}

	[Token(Token = "0x17000218")]
	public RenderTextureUVOriginStrategy renderTextureUVOriginStrategy
	{
		[Token(Token = "0x6000FFC")]
		[Address(RVA = "0xB5B920", Offset = "0xB59F20", VA = "0x180B5B920")]
		get
		{
			return default(RenderTextureUVOriginStrategy);
		}
		[Token(Token = "0x6000FFD")]
		[Address(RVA = "0xB5BC40", Offset = "0xB5A240", VA = "0x180B5BC40")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000219")]
	public static bool isRenderGraphViewerActive
	{
		[Token(Token = "0x6000FFE")]
		[Address(RVA = "0x2B80850", Offset = "0x2B7EE50", VA = "0x182B80850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021A")]
	internal static bool enableValidityChecks
	{
		[Token(Token = "0x6000FFF")]
		[Address(RVA = "0x2B80640", Offset = "0x2B7EC40", VA = "0x182B80640")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001000")]
		[Address(RVA = "0x2B80B90", Offset = "0x2B7F190", VA = "0x182B80B90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700021B")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x6001001")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021C")]
	internal RenderGraphDebugParams debugParams
	{
		[Token(Token = "0x6001005")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021D")]
	internal bool areAnySettingsActive
	{
		[Token(Token = "0x6001007")]
		[Address(RVA = "0x2B805F0", Offset = "0x2B7EBF0", VA = "0x182B805F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1400000A")]
	internal static event OnGraphRegisteredDelegate onGraphRegistered
	{
		[Token(Token = "0x6001048")]
		[Address(RVA = "0x2B803F0", Offset = "0x2B7E9F0", VA = "0x182B803F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001049")]
		[Address(RVA = "0x2B80990", Offset = "0x2B7EF90", VA = "0x182B80990")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	internal static event OnGraphRegisteredDelegate onGraphUnregistered
	{
		[Token(Token = "0x600104A")]
		[Address(RVA = "0x2B804F0", Offset = "0x2B7EAF0", VA = "0x182B804F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600104B")]
		[Address(RVA = "0x2B80A90", Offset = "0x2B7F090", VA = "0x182B80A90")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000C")]
	internal static event OnExecutionRegisteredDelegate onExecutionRegistered
	{
		[Token(Token = "0x600104C")]
		[Address(RVA = "0x2B802F0", Offset = "0x2B7E8F0", VA = "0x182B802F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600104D")]
		[Address(RVA = "0x2B80890", Offset = "0x2B7EE90", VA = "0x182B80890")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("UNITY_EDITOR")]
	[Conditional("DEVELOPMENT_BUILD")]
	private void AddPassDebugMetadata(RenderGraphPass renderPass, string file, int line)
	{
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x2B768F0", Offset = "0x2B74EF0", VA = "0x182B768F0")]
	internal NativePassCompiler CompileNativeRenderGraph(int graphHash)
	{
		return null;
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x2B79AF0", Offset = "0x2B780F0", VA = "0x182B79AF0")]
	private void ExecuteNativeRenderGraph()
	{
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x2B7F970", Offset = "0x2B7DF70", VA = "0x182B7F970")]
	public RenderGraph(string name = "RenderGraph")
	{
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x2B76110", Offset = "0x2B74710", VA = "0x182B76110")]
	internal void CleanupResourcesAndGraph()
	{
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x2B76260", Offset = "0x2B74860", VA = "0x182B76260")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x2B7C460", Offset = "0x2B7AA60", VA = "0x182B7C460")]
	internal List<DebugUI.Widget> GetWidgetList()
	{
		return null;
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x2B7E310", Offset = "0x2B7C910", VA = "0x182B7E310")]
	public void RegisterDebug([Optional] DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x2B7EA90", Offset = "0x2B7D090", VA = "0x182B7EA90")]
	public void UnRegisterDebug()
	{
	}

	[Token(Token = "0x600100A")]
	[Address(RVA = "0x2B7C2E0", Offset = "0x2B7A8E0", VA = "0x182B7C2E0")]
	public static List<RenderGraph> GetRegisteredRenderGraphs()
	{
		return null;
	}

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x2B7C290", Offset = "0x2B7A890", VA = "0x182B7C290")]
	internal static Dictionary<RenderGraph, List<DebugExecutionItem>> GetRegisteredExecutions()
	{
		return null;
	}

	[Token(Token = "0x600100C")]
	[Address(RVA = "0x2B79260", Offset = "0x2B77860", VA = "0x182B79260")]
	public void EndFrame()
	{
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x2B7C7F0", Offset = "0x2B7ADF0", VA = "0x182B7C7F0")]
	public TextureHandle ImportTexture(RTHandle rt)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x2B7C640", Offset = "0x2B7AC40", VA = "0x182B7C640")]
	public TextureHandle ImportShadingRateImageTexture(RTHandle rt)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x2B7C840", Offset = "0x2B7AE40", VA = "0x182B7C840")]
	public TextureHandle ImportTexture(RTHandle rt, ImportResourceParams importParams)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x2B7C780", Offset = "0x2B7AD80", VA = "0x182B7C780")]
	public TextureHandle ImportTexture(RTHandle rt, RenderTargetInfo info, [Optional] ImportResourceParams importParams)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x2B7C730", Offset = "0x2B7AD30", VA = "0x182B7C730")]
	internal TextureHandle ImportTexture(RTHandle rt, bool isBuiltin)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x2B7C490", Offset = "0x2B7AA90", VA = "0x182B7C490")]
	public TextureHandle ImportBackbuffer(RenderTargetIdentifier rt, RenderTargetInfo info, [Optional] ImportResourceParams importParams)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x2B7C500", Offset = "0x2B7AB00", VA = "0x182B7C500")]
	public TextureHandle ImportBackbuffer(RenderTargetIdentifier rt)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x2B789F0", Offset = "0x2B76FF0", VA = "0x182B789F0")]
	public TextureHandle CreateTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001015")]
	[Address(RVA = "0x2B78530", Offset = "0x2B76B30", VA = "0x182B78530")]
	[Obsolete("CreateSharedTexture() and shared texture workflow are deprecated, use ImportTexture() workflow instead.")]
	public TextureHandle CreateSharedTexture(in TextureDesc desc, bool explicitRelease = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001016")]
	[Address(RVA = "0x2B7E2F0", Offset = "0x2B7C8F0", VA = "0x182B7E2F0")]
	[Obsolete("RefreshSharedTextureDesc() and shared texture workflow are deprecated, use ImportTexture() workflow instead.")]
	public void RefreshSharedTextureDesc(TextureHandle handle, in TextureDesc desc)
	{
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x2B7E750", Offset = "0x2B7CD50", VA = "0x182B7E750")]
	[Obsolete("ReleaseSharedTexture() and shared texture workflow are deprecated, use ImportTexture() workflow instead.")]
	public void ReleaseSharedTexture(TextureHandle texture)
	{
	}

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x2B78A30", Offset = "0x2B77030", VA = "0x182B78A30")]
	public TextureHandle CreateTexture(TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x2B788C0", Offset = "0x2B76EC0", VA = "0x182B788C0")]
	public TextureHandle CreateTexture(TextureHandle texture, string name, bool clear = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x2B787F0", Offset = "0x2B76DF0", VA = "0x182B787F0")]
	public void CreateTextureIfInvalid(in TextureDesc desc, ref TextureHandle texture)
	{
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x2B7C3F0", Offset = "0x2B7A9F0", VA = "0x182B7C3F0")]
	public TextureDesc GetTextureDesc(in TextureHandle texture)
	{
		return default(TextureDesc);
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x2B7C3B0", Offset = "0x2B7A9B0", VA = "0x182B7C3B0")]
	public RenderTargetInfo GetRenderTargetInfo(TextureHandle texture)
	{
		return default(RenderTargetInfo);
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x2B78360", Offset = "0x2B76960", VA = "0x182B78360")]
	public RendererListHandle CreateRendererList(in RendererListDesc desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x2B78320", Offset = "0x2B76920", VA = "0x182B78320")]
	public RendererListHandle CreateRendererList(in RendererListParams desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x2B784D0", Offset = "0x2B76AD0", VA = "0x182B784D0")]
	public RendererListHandle CreateShadowRendererList(ref ShadowDrawingSettings shadowDrawingSettings)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x2B782C0", Offset = "0x2B768C0", VA = "0x182B782C0")]
	public RendererListHandle CreateGizmoRendererList(in Camera camera, in GizmoSubset gizmoSubset)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x2B78B00", Offset = "0x2B77100", VA = "0x182B78B00")]
	public RendererListHandle CreateUIOverlayRendererList(in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001022")]
	[Address(RVA = "0x2B78AA0", Offset = "0x2B770A0", VA = "0x182B78AA0")]
	public RendererListHandle CreateUIOverlayRendererList(in Camera camera, in UISubset uiSubset)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x2B78B70", Offset = "0x2B77170", VA = "0x182B78B70")]
	public RendererListHandle CreateWireOverlayRendererList(in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001024")]
	[Address(RVA = "0x2B78790", Offset = "0x2B76D90", VA = "0x182B78790")]
	public RendererListHandle CreateSkyboxRendererList(in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x2B78570", Offset = "0x2B76B70", VA = "0x182B78570")]
	public RendererListHandle CreateSkyboxRendererList(in Camera camera, Matrix4x4 projectionMatrix, Matrix4x4 viewMatrix)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x2B78640", Offset = "0x2B76C40", VA = "0x182B78640")]
	public RendererListHandle CreateSkyboxRendererList(in Camera camera, Matrix4x4 projectionMatrixL, Matrix4x4 viewMatrixL, Matrix4x4 projectionMatrixR, Matrix4x4 viewMatrixR)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x2B7C5B0", Offset = "0x2B7ABB0", VA = "0x182B7C5B0")]
	[Obsolete("ImportBuffer with forceRelease parameter is deprecated. Use ImportBuffer without it instead. #from(6000.3)")]
	public BufferHandle ImportBuffer(GraphicsBuffer graphicsBuffer, bool forceRelease = false)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x2B7C5B0", Offset = "0x2B7ABB0", VA = "0x182B7C5B0")]
	public BufferHandle ImportBuffer(GraphicsBuffer graphicsBuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x2B78200", Offset = "0x2B76800", VA = "0x182B78200")]
	public BufferHandle CreateBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x2B78250", Offset = "0x2B76850", VA = "0x182B78250")]
	public BufferHandle CreateBuffer(in BufferHandle graphicsBuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x600102B")]
	[Address(RVA = "0x2B7B7C0", Offset = "0x2B79DC0", VA = "0x182B7B7C0")]
	public BufferDesc GetBufferDesc(in BufferHandle graphicsBuffer)
	{
		return default(BufferDesc);
	}

	[Token(Token = "0x600102C")]
	[Address(RVA = "0x2B7C5F0", Offset = "0x2B7ABF0", VA = "0x182B7C5F0")]
	public RayTracingAccelerationStructureHandle ImportRayTracingAccelerationStructure(in RayTracingAccelerationStructure accelStruct, [Optional] string name)
	{
		return default(RayTracingAccelerationStructureHandle);
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x2B75A50", Offset = "0x2B74050", VA = "0x182B75A50")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsedWhenExecuting()
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x2B75D50", Offset = "0x2B74350", VA = "0x182B75D50")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsedWhenRecordingGraph()
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x2B75C50", Offset = "0x2B74250", VA = "0x182B75C50")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsedWhenRecordPassOrExecute()
	{
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x2B75E50", Offset = "0x2B74450", VA = "0x182B75E50")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsedWhenRecordingPass()
	{
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x2B75F50", Offset = "0x2B74550", VA = "0x182B75F50")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsingNativeRenderPassCompiler()
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x2B76030", Offset = "0x2B74630", VA = "0x182B76030")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckUsingNativeRenderPassCompiler()
	{
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x2B75950", Offset = "0x2B73F50", VA = "0x182B75950")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsedWhenActive()
	{
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x2B75B50", Offset = "0x2B74150", VA = "0x182B75B50")]
	[Conditional("DEVELOPMENT_BUILD")]
	[Conditional("UNITY_EDITOR")]
	private void CheckNotUsedWhenIdle()
	{
	}

	[Token(Token = "0x6001035")]
	public IRasterRenderGraphBuilder AddRasterRenderPass<PassData>(string passName, out PassData passData, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x6001036")]
	public IRasterRenderGraphBuilder AddRasterRenderPass<PassData>(string passName, out PassData passData, ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x6001037")]
	public IComputeRenderGraphBuilder AddComputePass<PassData>(string passName, out PassData passData, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x6001038")]
	public IComputeRenderGraphBuilder AddComputePass<PassData>(string passName, out PassData passData, ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x6001039")]
	public IUnsafeRenderGraphBuilder AddUnsafePass<PassData>(string passName, out PassData passData, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x600103A")]
	public IUnsafeRenderGraphBuilder AddUnsafePass<PassData>(string passName, out PassData passData, ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x600103B")]
	[Obsolete("AddRenderPass() is deprecated, use AddRasterRenderPass/AddComputePass/AddUnsafePass() instead.")]
	public RenderGraphBuilder AddRenderPass<PassData>(string passName, out PassData passData, ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return default(RenderGraphBuilder);
	}

	[Token(Token = "0x600103C")]
	[Obsolete("AddRenderPass() is deprecated, use AddRasterRenderPass/AddComputePass/AddUnsafePass() instead.")]
	public RenderGraphBuilder AddRenderPass<PassData>(string passName, out PassData passData, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return default(RenderGraphBuilder);
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x2B754F0", Offset = "0x2B73AF0", VA = "0x182B754F0")]
	public void BeginRecording(in RenderGraphParameters parameters)
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x2B79560", Offset = "0x2B77B60", VA = "0x182B79560")]
	public void EndRecordingAndExecute()
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x2B7E770", Offset = "0x2B7CD70", VA = "0x182B7E770")]
	public bool ResetGraphAndLogException(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x2B79D20", Offset = "0x2B78320", VA = "0x182B79D20")]
	internal void Execute()
	{
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x2B75270", Offset = "0x2B73870", VA = "0x182B75270")]
	public void BeginProfilingSampler(ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x2B792E0", Offset = "0x2B778E0", VA = "0x182B792E0")]
	public void EndProfilingSampler(ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x2602DC0", Offset = "0x26013C0", VA = "0x182602DC0")]
	internal DynamicArray<CompiledPassInfo> GetCompiledPassInfos()
	{
		return null;
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x2B764E0", Offset = "0x2B74AE0", VA = "0x182B764E0")]
	internal void ClearCurrentCompiledGraph()
	{
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x2B76420", Offset = "0x2B74A20", VA = "0x182B76420")]
	private void ClearCompiledGraph(CompiledGraph compiledGraph, bool useCompilationCaching)
	{
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x2B7C890", Offset = "0x2B7AE90", VA = "0x182B7C890")]
	private void InvalidateContext()
	{
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x2B7D440", Offset = "0x2B7BA40", VA = "0x182B7D440")]
	internal void OnPassAdded(RenderGraphPass pass)
	{
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x2B77A40", Offset = "0x2B76040", VA = "0x182B77A40")]
	internal int ComputeGraphHash()
	{
		return default(int);
	}

	[Token(Token = "0x600104F")]
	[Address(RVA = "0x2B77B60", Offset = "0x2B76160", VA = "0x182B77B60")]
	private void CountReferences()
	{
	}

	[Token(Token = "0x6001050")]
	[Address(RVA = "0x2B78CE0", Offset = "0x2B772E0", VA = "0x182B78CE0")]
	private void CullUnusedPasses()
	{
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x2B7EED0", Offset = "0x2B7D4D0", VA = "0x182B7EED0")]
	private void UpdatePassSynchronization(ref CompiledPassInfo currentPassInfo, ref CompiledPassInfo producerPassInfo, int currentPassIndex, int lastProducer, ref int intLastSyncIndex)
	{
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x2B7F790", Offset = "0x2B7DD90", VA = "0x182B7F790")]
	private void UpdateResourceSynchronization(ref int lastGraphicsPipeSync, ref int lastComputePipeSync, int currentPassIndex, in CompiledResourceInfo resource)
	{
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x2B7B8E0", Offset = "0x2B79EE0", VA = "0x182B7B8E0")]
	private int GetFirstValidConsumerIndex(int passIndex, in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x2B79E10", Offset = "0x2B78410", VA = "0x182B79E10")]
	private int FindTextureProducer(int consumerPass, in CompiledResourceInfo info, out int index)
	{
		return default(int);
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x2B7BF00", Offset = "0x2B7A500", VA = "0x182B7BF00")]
	private int GetLatestProducerIndex(int passIndex, in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x2B7C0B0", Offset = "0x2B7A6B0", VA = "0x182B7C0B0")]
	private int GetLatestValidReadIndex(in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x2B7BA60", Offset = "0x2B7A060", VA = "0x182B7BA60")]
	private int GetFirstValidWriteIndex(in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6001058")]
	[Address(RVA = "0x2B7C1A0", Offset = "0x2B7A7A0", VA = "0x182B7C1A0")]
	private int GetLatestValidWriteIndex(in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x2B783A0", Offset = "0x2B769A0", VA = "0x182B783A0")]
	private void CreateRendererLists()
	{
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x2B7BBC0", Offset = "0x2B7A1C0", VA = "0x182B7BBC0")]
	internal bool GetImportedFallback(TextureDesc desc, out TextureHandle fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x2B74C30", Offset = "0x2B73230", VA = "0x182B74C30")]
	private void AllocateCulledPassResources(ref CompiledPassInfo passInfo)
	{
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x2B7EEF0", Offset = "0x2B7D4F0", VA = "0x182B7EEF0")]
	private void UpdateResourceAllocationAndSynchronization()
	{
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x2B7EBC0", Offset = "0x2B7D1C0", VA = "0x182B7EBC0")]
	private void UpdateAllSharedResourceLastFrameIndex()
	{
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x2B75060", Offset = "0x2B73660", VA = "0x182B75060")]
	private bool AreRendererListsEmpty(List<RendererListHandle> rendererLists)
	{
		return default(bool);
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x2B7E9C0", Offset = "0x2B7CFC0", VA = "0x182B7E9C0")]
	private void TryCullPassAtIndex(int passIndex)
	{
	}

	[Token(Token = "0x6001060")]
	[Address(RVA = "0x2B78BD0", Offset = "0x2B771D0", VA = "0x182B78BD0")]
	private void CullRendererLists()
	{
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x2B7ECE0", Offset = "0x2B7D2E0", VA = "0x182B7ECE0")]
	private bool UpdateCurrentCompiledGraph(int graphHash, bool forceNoCaching = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x2B77410", Offset = "0x2B75A10", VA = "0x182B77410")]
	internal void CompileRenderGraph(int graphHash)
	{
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x2B76BE0", Offset = "0x2B751E0", VA = "0x182B76BE0")]
	private unsafe ref CompiledPassInfo CompilePassImmediatly(RenderGraphPass pass)
	{
		return ref *(CompiledPassInfo*)null;
	}

	[Token(Token = "0x6001064")]
	[Address(RVA = "0x2B79BD0", Offset = "0x2B781D0", VA = "0x182B79BD0")]
	private void ExecutePassImmediately(RenderGraphPass pass)
	{
	}

	[Token(Token = "0x6001065")]
	[Address(RVA = "0x2B79700", Offset = "0x2B77D00", VA = "0x182B79700")]
	private void ExecuteCompiledPass(ref CompiledPassInfo passInfo)
	{
	}

	[Token(Token = "0x6001066")]
	[Address(RVA = "0x2B79C00", Offset = "0x2B78200", VA = "0x182B79C00")]
	private void ExecuteRenderGraph()
	{
	}

	[Token(Token = "0x6001067")]
	[Address(RVA = "0x2B7DD60", Offset = "0x2B7C360", VA = "0x182B7DD60")]
	private void PreRenderPassSetRenderTargets(in CompiledPassInfo passInfo, RenderGraphPass pass, InternalRenderGraphContext rgContext)
	{
	}

	[Token(Token = "0x6001068")]
	[Address(RVA = "0x2B7D940", Offset = "0x2B7BF40", VA = "0x182B7D940")]
	private void PreRenderPassExecute(in CompiledPassInfo passInfo, RenderGraphPass pass, InternalRenderGraphContext rgContext)
	{
	}

	[Token(Token = "0x6001069")]
	[Address(RVA = "0x2B7D480", Offset = "0x2B7BA80", VA = "0x182B7D480")]
	private void PostRenderPassExecute(ref CompiledPassInfo passInfo, RenderGraphPass pass, InternalRenderGraphContext rgContext)
	{
	}

	[Token(Token = "0x600106A")]
	[Address(RVA = "0x2B76780", Offset = "0x2B74D80", VA = "0x182B76780")]
	private void ClearRenderPasses()
	{
	}

	[Token(Token = "0x600106B")]
	[Address(RVA = "0x2B7E5C0", Offset = "0x2B7CBC0", VA = "0x182B7E5C0")]
	private void ReleaseImmediateModeResources()
	{
	}

	[Token(Token = "0x600106C")]
	[Address(RVA = "0x2B7CD60", Offset = "0x2B7B360", VA = "0x182B7CD60")]
	private void LogFrameInformation()
	{
	}

	[Token(Token = "0x600106D")]
	[Address(RVA = "0x2B7D310", Offset = "0x2B7B910", VA = "0x182B7D310")]
	private void LogRendererListsCreation()
	{
	}

	[Token(Token = "0x600106E")]
	[Address(RVA = "0x2B7CF40", Offset = "0x2B7B540", VA = "0x182B7CF40")]
	private void LogRenderPassBegin(in CompiledPassInfo passInfo)
	{
	}

	[Token(Token = "0x600106F")]
	[Address(RVA = "0x2B7C970", Offset = "0x2B7AF70", VA = "0x182B7C970")]
	private void LogCulledPasses()
	{
	}

	[Token(Token = "0x6001070")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	private ProfilingSampler GetDefaultProfilingSampler(string name)
	{
		return null;
	}

	[Token(Token = "0x6001071")]
	[Address(RVA = "0x2B7ED50", Offset = "0x2B7D350", VA = "0x182B7ED50")]
	private void UpdateImportedResourceLifeTime(ref DebugData.ResourceData data, List<int> passList)
	{
	}

	[Token(Token = "0x6001072")]
	[Address(RVA = "0x2B7E4C0", Offset = "0x2B7CAC0", VA = "0x182B7E4C0")]
	private void RegisterGraph()
	{
	}

	[Token(Token = "0x6001073")]
	[Address(RVA = "0x2B7EB10", Offset = "0x2B7D110", VA = "0x182B7EB10")]
	private void UnregisterGraph()
	{
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x2B7B810", Offset = "0x2B79E10", VA = "0x182B7B810")]
	private static string GetExecutionNameAllocates(EntityId entityId)
	{
		return null;
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x2B76330", Offset = "0x2B74930", VA = "0x182B76330")]
	private void ClearCacheIfNewActiveDebugSession()
	{
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x2B7AFC0", Offset = "0x2B795C0", VA = "0x182B7AFC0")]
	private void GenerateDebugData(int graphHash)
	{
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x2B79F00", Offset = "0x2B78500", VA = "0x182B79F00")]
	private void GenerateCompilerDebugData(ref DebugData debugData)
	{
	}

	[Token(Token = "0x6001078")]
	[Address(RVA = "0x2B7E880", Offset = "0x2B7CE80", VA = "0x182B7E880")]
	internal void SetGlobal(in TextureHandle h, int globalPropertyId)
	{
	}

	[Token(Token = "0x6001079")]
	[Address(RVA = "0x2B7C910", Offset = "0x2B7AF10", VA = "0x182B7C910")]
	internal bool IsGlobal(int globalPropertyId)
	{
		return default(bool);
	}

	[Token(Token = "0x600107A")]
	[Address(RVA = "0x2B74BE0", Offset = "0x2B731E0", VA = "0x182B74BE0")]
	internal Dictionary<int, TextureHandle>.ValueCollection AllGlobals()
	{
		return null;
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x2B7BB50", Offset = "0x2B7A150", VA = "0x182B7BB50")]
	internal TextureHandle GetGlobal(int globalPropertyId)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600107C")]
	[Address(RVA = "0x2B76590", Offset = "0x2B74B90", VA = "0x182B76590")]
	internal void ClearGlobalBindings()
	{
	}

	[Token(Token = "0x600107D")]
	[Address(RVA = "0x2B7E9A0", Offset = "0x2B7CFA0", VA = "0x182B7E9A0")]
	internal void SetIntraFrameMemoryAliasing(bool enabled)
	{
	}
}
